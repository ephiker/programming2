#include "Dahyun.h"

int main()
{
   int choice = 0, count = 0;
   //잘 연결 되었는지 확인 후 기초 세팅 시작.
   for (int i = 1; i < 4; i++)
   {
      if (arrMotors[i].connected())
      {
         cout << arrMotors[i].driver_name() << " is successfully connected" << endl;
         arrMotors[i].set_speed_sp(100);
         arrMotors[i].set_stop_action(stop_type);
      }
   }

   cout << endl << "Choice 1. Setting up and Start" << endl; //셋팅 후 시작
   cout << "Choice 2. Skip the setting and Start" << endl; //셋팅 스킵 후 시작
   cin >> choice;

   switch (choice)
   {
   case 1:
      for (int i = 1; i > 4; i++) MENU(i);
      break;
   case 2:
      print_values(ULTRA);
      break;
   }
   cout << endl;

   //체크 시작

   while (count < 3)
   {
      PICK.set_position_sp(80); //집개를 오무린 상태에서 시작.
      PICK.set_command(run_type);
      this_thread::sleep_for(chrono::milliseconds(500));
      Dahyun_Check();
      //옮기기 시작.
      while (!S_POSITION->empty()) //Stack에 저장된 Coordination을 다 꺼낸다
      {
         Dahyun_move(S_POSITION->pop() + 20);
         count++;//총 3번 들어야 되니, 인식 못할 경우를 위한 변수
      }//Coordination을 꺼내고 20을 더해준다(위치 조정)
      AXIS.set_position_sp(0);
      AXIS.set_command(run_type);//원래 위치로 돌아간다.
      PICK.set_position_sp(0); //집개를 벌린다.
      PICK.set_command(run_type);
      this_thread::sleep_for(chrono::milliseconds(1000));
   }
   SingTT(); //끝나고 TT 노래를 부름.
   //Stack 메모리 삭제
   delete[] S_POSITION;
   delete[] S_VALUE;
   return 0;
}
