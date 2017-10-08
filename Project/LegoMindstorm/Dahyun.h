#include "ev3dev.h"
#include <iostream>
#include <thread>
#include <string.h>
#include <errno.h>
#define FREQUENCY 1000
#define DURATION 200

using namespace std;
using namespace ev3dev;

//Coordination과 Sensor Value를 계산할 Stack 선언
class Stack
{
public:
   Stack(int num)
   {
      top = 0; maxlen = num; s = new float[maxlen];
   }
   void push(float t)
   {
      if (top == maxlen) return;
      s[top++] = t;
   }
   float pop()
   {
      if (top == 0) return -1;
      return s[--top];
   }
   int empty()
   {
      return top == 0;
   }
private:
   float *s;
   int top;
   int maxlen;
};
//스택 만들기
Stack *S_POSITION = new Stack(20);
Stack *S_VALUE = new Stack(20);

//string 값 초기화
std::string run_type = "run-to-abs-pos", stop_type = "hold", reset = "reset";

//현재 센서의 값을 출력 및 반환
float print_values(sensor &s)
{
   auto dp = s.decimals();
   unsigned m = s.num_values();
   float follow_up = 0;
   for (unsigned i = 0; i<m; ++i)
   {
      if (i) cout << "; ";
      if (dp)
      {
         cout << s.float_value(i);
         follow_up = s.float_value(i);
      }
      else
      {
         cout << s.value(i);
         follow_up = s.value(i);
      }
   }
   cout << " " << s.units();
   return follow_up;
}

motor arrMotors[4] = {
   { OUTPUT_A },
   { OUTPUT_B },
   { OUTPUT_C },
   { OUTPUT_D }
};
sensor arrSensors[4]{
   { INPUT_1 },
   { INPUT_2 },
   { INPUT_3 },
   { INPUT_4 }
};

motor &AXIS = arrMotors[1]; // 축
motor &PICK = arrMotors[2]; //집개
motor &NECK = arrMotors[3]; // 목
sensor &ULTRA = arrSensors[3]; //센서

//necessary functions.
void Dahyun_move(int);
void Dahyun_Check(float);
void MENU(int);
void SingTT();
//확인받기.

void Dahyun_move(int v)
{
   //속도 다시 설정
   AXIS.set_speed_sp(550);
   NECK.set_speed_sp(400);
   PICK.set_speed_sp(400);

   AXIS.set_position_sp(v); //A로간다.
   AXIS.set_command(run_type); //run-to-abs-pos absolute poisition.
   this_thread::sleep_for(chrono::milliseconds(1000));
   PICK.set_position_sp(0); //집개를 벌린다.
   PICK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(300));
   NECK.set_position_sp(120); // 하강한다.
   NECK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(600));
   PICK.set_position_sp(80); //집는다.
   PICK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(300));
   NECK.set_position_sp(0); // 상승한다.
   NECK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(600));
   AXIS.set_position_sp(660); // B로간다.
   AXIS.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(1000));
   NECK.set_position_sp(120); // 하강한다.
   NECK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(600));
   PICK.set_position_sp(0); // 벌린다.
   PICK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(300));
   NECK.set_position_sp(0); //올린다.
   NECK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(600));
   PICK.set_position_sp(80); //집개를 오무린다.
   PICK.set_command(run_type);
   this_thread::sleep_for(chrono::milliseconds(500));
}

void Dahyun_Check()
{
   float value = 0;
   int coordination = 0;
   float temp = 0;

   AXIS.set_speed_sp(250); //Scan해줄 때 속도 전환.
   S_VALUE->push(8.4); //첫 value 값 넣어주기
   while (true)
   {
      coordination += 40;
      AXIS.set_position_sp(coordination);
      AXIS.set_command(run_type);
      this_thread::sleep_for(chrono::milliseconds(500));

      cout << "Coordination is : " << coordination << endl;
      cout << "Value is : ";
      value = print_values(ULTRA); //센서가 비추는 값을 출력 및 반환.

      //수치조정 (하드웨어 이슈 때문에 값이 달라지는 것을 방지)
      if (value > 8.6)
      {
         value = 8.4;
         cout << "Revised Value IS : " << value << endl;
      }
      else if (value > 6.9 && value < 8.4)
      {
         value = 8.4;
         cout << "Revised Value IS : " << value << endl;
      }
      cout << endl;
      //Stack에 저장된 sensor value를 꺼낸다.
      temp = S_VALUE->pop();
      if (coordination <= 640 && value - temp >= 1.2)
      //Current Sensor Value - Previous Sensor Value 가 1.2이상이면 물체가 있다고 가정한다.
      //장애물들은 좌표 값 640 이하에 있으니, 640 이상일 시, 장애물을 인식 하지 않는다.
      {
         sound::tone(FREQUENCY, DURATION - 80);//발견하면, Ding-Dong 소리를 낸다.
         sound::tone(FREQUENCY - 200, DURATION - 80);
         cout << "********FOUND IT: " << value << "-" << temp << endl;//발견한 값을 출력
         S_POSITION->push(coordination); //그 좌표를 stack안에 넣는다.
      }
      S_VALUE->push(value); //Current Sensor Value를 stack안에 넣는다
      if (coordination >= 660) break; //좌표가 660이 이상일 시, Check를 끝낸다.
   }//반복
}

void MENU(int idx)
{
   char cmd = 'n';
   int value = 0;
   float height = 0;

   while (1)
   {
      //starting position 정해주기.
      cout << "Set " << arrMotors[idx].driver_name() << " starting position!\n" << endl;
      cin >> value;
      arrMotors[idx].set_position_sp(value);
      arrMotors[idx].set_command(run_type);
      if (idx == 3) //Neck을 정할때는 sensor value를 출력 및 반환한다.
      {
         cout << "Value is : ";
         height = print_values(ULTRA);
         cout << endl;
      }
      cout << "\nDo you like your starting position? (y/n)" << endl;
      cin >> cmd;
      if (cmd == 'y') //현 위치가 만족스러우면
      { //그 값을 reset시킨다 (그 위치의 position이 0이 된다)
         arrMotors[idx].set_command(reset);
         arrMotors[idx].set_speed_sp(100);
         arrMotors[idx].set_stop_action(stop_type);
         arrMotors[idx].set_command(run_type);
         return;
      }
   }
}

void SingTT() //TT 노래
{
   for (int i = 0; i < 2; i++)
   {
      sound::tone(FREQUENCY - 200, DURATION);
      this_thread::sleep_for(chrono::milliseconds(200));
      sound::tone(FREQUENCY - 200, DURATION);
      this_thread::sleep_for(chrono::milliseconds(200));
      sound::tone(FREQUENCY - 100, DURATION);
      this_thread::sleep_for(chrono::milliseconds(200));
      sound::tone(FREQUENCY, DURATION);
      this_thread::sleep_for(chrono::milliseconds(300));
      sound::tone(FREQUENCY, DURATION - 100);
      this_thread::sleep_for(chrono::milliseconds(1000));
   }
}
