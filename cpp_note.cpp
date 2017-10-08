#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <list>
#include <vector>



class Person{
private:
  char *name;
  int age;
public:
  void getName(){
    std::cout << "Name : " << name <<'\n';
  }
  void setMoreInformation(){

  }
  printTypeAndName(){
    for(int i = 0; i<4; i++){
        std::cout << "[" << i << "] : " <<  <<'\n';
    }

  }
}

// typedef struct{
//   char a;
//   char b[3];
//   char c[3];
// }st1;
//
// int main(int argc, char const *argv[]) {
//   std::cout << "st1: " <<sizeof(st1) <<'\n';
//   return 0;
// }

// class a{
// public:
//   virtual void show(){
//     std::cout << "Class A" << '\n';
//   }
// };
//
// class b : public a{
// public:
//   virtual void show(){
//     std::cout << "Class B" << '\n';
//   }
// };
// class c{
// public:
//   void f(a* aA){ aA->show(); }
//   void f(b* aB){ aB->show(); }
// };
//
// int main(int argc, char const *argv[]) {
//   a* pA = new b();
//   c* pC = new c();
//   pA->show();
//   pC->f(pA);
//   return 0;
// }

// std::vector<int> v;

// struct Item{
//   Item(int itemCd, int buyMoney){
//     ItemCd = itemCd;
//     BuyMoney = buyMoney;
//   }
//
//   int ItemCd;
//   int BuyMoney;
// };
//
// int main(int argc, char const *argv[]) {
//   list< Item > Itemlist;
//   Item item1( 1, 2000 );
//   Itemlist.push_front( item1 );
//   Item item2( 2, 1000 );
//   Itemlist.push_front( item2 );
//
//   return 0;
// }







// //컨테이너 linked list 링크드리스트
// class Container{
// public:
//     Container(int num):contents(num), pNext(NULL){}
//
// public:
//     void set_contents(int num){ contents = num; }
//     int get_contents() { return contents; }
//
//     void set_next(Container* next){ pNext = next;}
//     Container* get_next() { return pNext; }
//
// private:
//     int contents;
//     Container* pNext;
// };
//
// class LinkedList
// {
// public:
//     LinkedList():pHead(NULL){ }
//     ~LinkedList(){}
//
// public:
//     void insert_val(int num)
//     {
//         if( pHead == NULL)
//         {
//             // 1. list가 비어 있는 경우
//             // Container 할당 by cbchoi
//             pHead = new Container(num);
//         }
//         else
//         {// 2. list가 비어 있지 않는 경우
//             // 따라간다. by San
//             Container* cur = pHead;
//
//             while(cur->get_next() != NULL)
//             {
//                 cur = cur->get_next();
//             }
//
//             // Container 할당 by cbchoi
//             Container* temp = new Container(num);
//             // Connect by cbchoi
//             cur->set_next(temp);
//         }
//     }
//
//     void insert_to_head(int num)
//     {
//         //1. LIST가 비어있는 경우
//         if(pHead == NULL){
//             pHead = new Container(num);
//         }
//         else{
//             // 할당
//             Container* cur = new Container(num);
//             // 2-2 pHead 옮기기
//             // 2-2-1. cur의 next를 이전 헤드 로 연결
//             cur->set_next(pHead);
//             // 2-2-2. cur를 새로운 헤드로 옮기기
//             pHead = cur;
//
//             //Container* temp=pHead;
//             //pHead=cur;
//             //pHead->set_next(temp);
//         }
//     }
//
//     Container* search(int val)
//     {
//         Container* cur = pHead;
//
//         while(cur != NULL)
//         {
//             if(cur->get_contents() == val)
//                 break;
//             else
//                 cur = cur->get_next();
//         }
//         return cur;
//         //return NULL;
//     }
//
//     void erase_contents(int val)
//     {
//         Container* cur = search(val);
//         if(cur != NULL)
//         {
//             // container가 하나만 있는 경우
//                 // Container == pHead
//             if(cur == pHead && cur->get_next() == NULL)
//             {
//                 delete cur;
//                 pHead = NULL;
//             }
//             else
//             {
//                 if(cur == pHead)
//                 {
//                     remove_head();
//                 }
//                 else
//                 {
//                     Container* cur2 = pHead;
//                     while(cur2->get_next() != cur)
//                     {
//                         cur2 = cur2->get_next();
//                     }
//
//                     cur2->set_next(cur->get_next());
//                     delete cur;
//                 }
//             }
//             // container가 다수 있는 경우
//                 // 지우려는 대상이 Head인 경우
//                 // 그 외
//
//         }
//     }
//
//     void remove_head()
//     {
//         // 리스트에 아무것도 없는 경우
//         if(pHead != NULL)
//         {
//         // 리스트에 하나만 있는 경우
//         // 그외
//             if(pHead->get_next() == NULL)
//             {
//                 delete pHead;
//                 pHead = NULL;
//             }
//             else
//             {
//                 Container* cur = pHead;
//                 pHead = pHead->get_next();
//                 delete cur;
//             }
//         }
//
//     }
//
//     void print_list()
//     {
//         Container* cur = pHead;
//         while(cur != NULL)
//         {
//             std::cout << cur->get_contents() << ", ";
//             cur = cur->get_next();
//         }
//        std::cout << std::endl;
//     }
// private:
//     Container* pHead;
// };
//
// int main(int argc, char** argv)
// {
//     LinkedList ll;
//
//     char ch = ' ';
//     int val = 99;
//     while(val != -1)
//     {
//         std::cout << ">>";
//         std::cin >> val;
//         ll.insert_val(val);
//     }
//     ll.print_list();
//     ll.erase_contents(10);
//     ll.print_list();
//     return 0;
// }
// //컨테이너 linked list 링크드리스트







// 상속 클래스
// class Employee{
// private:
//   char name[100];
// public:
//   Employee(char * name){
//     strcpy(this->name, name);
//   }
//   void ShowYourName() const{
//     std::cout << "name: " << name << '\n';
//   }
// };
//
// class PermanentWorker : public Employee{
// private:
//   int salary;
// public:
//   PermanentWorker(char * name, int money) : Employee(name), salary(money) { }
//   int GetPay() const{
//     return salary;
//   }
//   void ShowSalaryInfo() const{
//     ShowYourName();
//     std::cout << "salary:" << salary << '\n';
//   }
// };
//
// class TemporaryWorker : public Employee{
// private:
//   int workTime;
//   int payPerHour;
// public:
//   TemporaryWorker(char * name, int pay) : Employee(name), workTime(0), payPerHour(pay) { }
//   void AddWorkTime(int time){
//     workTime += time;
//   }
//   int GeyPay() const{
//     return workTime * payPerHour;
//   }
//   void ShowSalaryInfo const{
//     ShowYourName();
//     std::cout << "salary: " << GetPay() << '\n';
//   }
// };
//
// class SalesWorker : public PermanentWorker{
// private:
//   int salesResult;
//   double bonusRatio;
// public:
//   SalesWorker(char * name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio){ }
//   void AddSalesResult(int value){
//     salesResult += value
//   }
//   int GetPay() const{
//     return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio);
//   }
//   void ShowSalaryInfo() const{
//     ShowYourName();
//     std::cout << "salary: " << GetPay() << '\n';
//   }
// };
//
// class EmployeeHandler{
// private:
//   Employee* empList[50];
//   int empNum;
// public:
//   EmployeeHandler() : empNum(0){ }
//   void AddEmployee(Employee * emp){
//     empList[empNum++] = emp;
//   }
//   void ShowAllSalaryInfo() const{
//     for(int i = 0; i<empNum; i++)
//       empList[i]->ShowSalaryInfo();
//   }
//   void ShowTotalSalary() const{
//     int sum = 0;
//     for(int i = 0; i<empNum; i++)
//       sum += empList[i]->GetPay();
//     std::cout << "salary sum: " << sum << '\n';
//   }
//   ~EmployeeHandler(){
//     for(int i = 0; i< empNum; i++)
//       delete empList[i];
//   }
// };
//
// int main(int argc, char const *argv[]) {
//   EmployeeHandler handler;
//   //정규직 등록
//   handler.AddEmployee(new PermanentWorker("KIM", 1000));
//   handler.AddEmployee(new PermanentWorker("LEE", 1500));
//
//   //임시직 등록
//   TemporaryWorker * alba = new TemporaryWorker("Jung", 700);;
//   alba->AddWorkTime(5);
//   handler.AddEmployee(alba);
//
//   SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
//   seller->AddSalesResult(7000);
//   handler.AddEmployee(seller);
//
//   //이번달 지불 급여
//   handler.ShowAllSalaryInfo();
//
//   //이번달 지불 급여 총합
//   handler.ShowTotalSalary();
//
//   return 0;
// }






// // 상속과 다형성 polymorphism
// class Person{
// public:
//   void Sleep() { std::cout << "sleep" << '\n';}
// };
//
// class Student : public Person{
// public:
//   void Study() { std::cout << "Study" << '\n';}
// };
//
// class PartTimeStudent : public student{
// public:
//   void Work() { std::cout << "Work" << '\n';}
// };
//
// int main(int argc, char const *argv[]) {
//   Person * ptr1 = new Student(); //상속하므로 person형 포인터 변수는 student 객체를 가리킬 수 있다
//   Person * ptr2 = new PartTimeStudent(); //간접 상속하므로 person형 포인터 변수는 partrimestudent 객체를 가리킬 수 있다
//   Student * ptr3 = new PartTimeStudent();
//   ptr1 -> Sleep();
//   ptr2 -> Sleep();
//   ptr3 -> Study();
//   delete ptr1 ; delete ptr2; delete ptr3;
//   return 0;
// }
// // 상속과 다형성 polymorphism


// //클래스 템플릿 class template
// template <class T>
// class Point{
// private:
//   T xpos, ypos;
// public:
//   Point(T x = 0, T y = 0) : xpos(x), ypos(y){ }
//   void ShowPosition() const{
//     std::cout << xpos << "," << ypos <<'\n';
//   }
// };
//
// int main(int argc, char const *argv[]) {
//   Point<int> p1(3,4);
//   p1.ShowPosition();
//
//   Point<float> p2(3.2,4.8);
//   p2.ShowPosition();
//
//   Point<char> p3('Y', 'K');
//   p3.ShowPosition();
//   return 0;
// }
// //클래스 템플릿 class template




// //함수 템플릿 funtion template
// class Point{
// private:
//   int xpos, ypos;
// public:
//   Point(int x = 0, int y = 0) : xpos(x), ypos(y){ }
//   void ShowPosition() const{
//     std::cout << xpos << "," << ypos <<'\n';
//   }
// };
//
// template <class T>
// void SwapData(T& a, T& b){
//   T temp = a;
//   a = b;
//   b = temp;
// }
//
// int main(int argc, char const *argv[]) {
//   Point p1(5,10);
//   Point p2(4, 8);
//   p1.ShowPosition();
//   p2.ShowPosition();
//   SwapData(p1, p2);
//   p1.ShowPosition();
//   p2.ShowPosition();
//   return 0;
// }
// //함수 템플릿 funtion template




// //상속 시 생성자와 소멸자 메인함수★★★★★
// class MyFriendInfo{
// private:
//   char * name;
//   int age;
// public:
//   MyFriendInfo(char * _name, int _age) : age(_age){
//     name = new char[strlen(_name)+1];
//   }
//   void ShowMyFriendInfo(){
//     std::cout << "NAME: " << name <<'\n';
//     std::cout << "AGE: " << age <<'\n';
//   }
//   ~MyFriendInfo(){
//     delete []name;
//   }
// };
//
// class MyFriendDetailInfo : public MyFriendInfo{
// private:
//   char * addr;
//   char * phone;
// public:
//   MyFriendDetailInfo(char * _name, int _age, char * _addr, char * _phone) //상속받은 애들도 관리해줘
//   : MyFriendInfo(_name, _age) {
//     addr = new char[strlen(_addr)+1];
//     phone = new char[strlen(_phone)+1];
//     strcpy(addr, _addr);
//     strcpy(phone, _phone);
//   }
//   void ShowMyFriendDetailInfo(){
//     ShowMyFriendInfo();
//     std::cout << "address: " << addr <<'\n';
//     std::cout << "phone: " << phone <<'\n';
//   }
// };
//
// int main(int argc, char const *argv[]) {
//   MyFriendDetailInfo fred1("ephiker", 25, "handong vision", "010-1234-1234");
//   MyFriendDetailInfo fred2("andre", 29, "handong creation", "010-1234-0000");
//   fred1.ShowMyFriendDetailInfo();
//   fred2.ShowMyFriendDetailInfo();
//   return 0;
// }
// //상속 시 생성자와 소멸자





// //상속
// class Person{
// private:
//   int age;
//   char name[50];
// public:
//   Person(int myage, char * myname) : age(myage){
//     strcpy(name, myname);
//   }
//   void WhatYourName(){
//     std::cout << "My name is " << name <<'\n';
//   }
//   void HowOldAreYou(){
//     std::cout << "I am " << age << " year's old"<<'\n';
//   }
// };
//
// class UnivStudent : public Person{ // person 상속
// private:
//   char major[50];
// public:
//   UnivStudent(char * myname, int myage, char * mymajor)
//    : Person(myage, myname){ // person의 멤버들도 초기화
//     strcpy(major, mymajor); // 자기 class 멤버들 초기회
//   }
//   void WhoYouAre(){
//     WhatYourName();
//     HowOldAreYou();
//     std::cout << "My major is " << major <<'\n';
//   }
// };
//
//
// int main(int argc, char const *argv[]) {
//   UnivStudent ustd1("Lee", 22, "Computer");
//   ustd1.WhoYouAre();
//   UnivStudent ustd2("Yoon", 21, "Electronic");
//   ustd2.WhoYouAre();
//
//   return 0;
// }



// // 생성자와 소멸자 constructor destructor
// class NameCard{
// private:
//   char * name;
//   char * company;
//   char * phone;
//
// public:
//   NameCard(char * _name, char * _company, char * _phone){
//     name = new char[strlen(_name)+1];
//     company = new char[strlen(_company)+1];
//     phone = new char[strlen(_phone)+1];
//     strcpy(name, _name);
//     strcpy(company, _company);
//     strcpy(phone, _phone);
//   }
//   void ShowNameCardInfo(){
//     std::cout << "name: " << name << '\n';
//     std::cout << "company: " << company << '\n';
//     std::cout << "phone: " << phone << '\n';
//   }
//   ~NameCard(){
//     delete []name;
//     delete []company;
//     delete []phone;
//   }
// };
//
//
// int main(int argc, char const *argv[]) {
//   NameCard manClerk("Lee", "ABCEng", "010-1111-2222");
//   NameCard manSENIOR("Hong", "ORANGEEng", "010-1111-3333");
//   NameCard manAssist("Kim", "SoGoodComp", "010-1111-4444");
//   manClerk.ShowNameCardInfo();
//   manSENIOR.ShowNameCardInfo();
//   manAssist.ShowNameCardInfo();
//   return 0;
// }
// // 생성자와 소멸자 constructor destructor







// constructor 생성자
// class Simpleclass{
// private:
//   int num1;
//   int num2;
//
// public:
//   Simpleclass(){
//     num1 = 0;
//     num2 = 0;
//   }
//   Simpleclass(int n){
//     num1 = n;
//     num2 = 0;
//   }
//   Simpleclass(int n1, int n2){
//     num1 = n1;
//     num2 = n2;
//   }
//   void ShowData() const{
//     std::cout << num1 << " " << num2 << '\n';
//   }
// };
//
//
// int main(int argc, char const *argv[]) {
//   Simpleclass sc1;
//   sc1.ShowData();
//   sc1.num1 = 77;
//   sc1.num2 = 99;
//   sc1.ShowData();
//
//
//   // Simpleclass sc2(100);
//   // sc2.ShowData();
//   //
//   // Simpleclass sc3(100, 200);
//   // sc3.ShowData();
//
//   return 0;
// }
// constructor 생성자




// // class programming with constructor
// class Point{
// private:
//   int xpos;
//   int ypos;
// public:
//   Point(int x, int y): xpos(x), ypos(y)
//   { }
//   void ShowPointInfo() const{
//     std::cout << xpos << "," << ypos << '\n';
//   }
// };
//
// class Circle{ //반지름과 중점
// private:
//   int rad;
//   Point center;
// public:
//   Circle(int x, int y, int r) : center( x, y ) {
//     rad = r;
//   }
//   void ShowCircleInfo() const {
//     std::cout << "radius: " << rad <<'\n';
//     center.ShowPointInfo();
//   }
// };
//
//
// class Ring{ // 두 개의 circles
// private:
//   Circle incircle;
//   Circle outcircle;
// public:
//   Ring(int inX, int inY, int inR, int outX, int outY, int outR)
//   : incircle( inX, inY, inR ), outcircle( outX, outY, outR )
//   { }
//
//   void ShowRingInfo(){
//     std::cout << "inner circle info..." << '\n';
//     incircle.ShowCircleInfo();
//     std::cout << "outer circle info..." << '\n';
//     outcircle.ShowCircleInfo();
//   }
// };
//
//
// int main(int argc, char const *argv[]) {
//   Ring ring(1,1,4,2,2,9);
//   ring.ShowRingInfo();
//   return 0;
// }
// // class programming with constructor






// class programming
// class Point{ //point의 구성요소는 2 개의 점이다.
// private:
//   int xpos, ypos;
// public:
//   void Init(int x, int y){
//     xpos = x;
//     ypos = y;
//   }
//   void ShowPointInfo() const
//   {
//     std::cout << xpos << "," << ypos <<'\n';
//   }
// };
//
//
//
// class Circle{ //circle의 구성요소는 rad(반지름과) 한 개의 point이고, 이 변수들을 이니셜라이즈 하는 함수이다.
// private:
//   int rad;
//   Point center; //xpos, ypos라는 변수를 지니는 객체 선언
// public:
//   init( int x, int y, int r ){
//     rad = r;
//     center.Init(x,y);
//   }
//   void showcircleinfo() const {
//     std::cout << "radius: " << rad <<'\n';
//     center.ShowPointInfo();
//   }
// };
//
//
//
// class Ring{ //링의 구성요소는 두 개의 circle이고, 그 2개의 circle을 이니셜라이즈 하는 함수이다.
// private:
//   Circle incircle; //center라는 변수를 지니고 반지름, x y 좌표를 정하는 객체 선언
//   Circle outcircle; //center라는 변수를 지니고 반지름, x y 좌표를 정하는 객체 선언
// public:
//   void Init( int inX, int inY, int inR, int outX, int outY, int outR){
//     incircle.init(inX, inY, inR);
//     outcircle.init(outX, outY, outR);
//   }
//
//   void ShowRingInfo(){
//     std::cout << "Inner Circle Info..." << '\n';
//     incircle.showcircleinfo();
//     std::cout << "Outer Circle Info..." << '\n';
//     outcircle.showcircleinfo();
//   }
// };
//
//
//
// int main(int argc, char const *argv[]) {
//   Ring ring;
//   ring.Init(1,1,4,2,2,9);
//   ring.ShowRingInfo();
//   return 0;
// }
// class programming







// //object oriented programming
// class FruitSeller{
// private:
//   int APPLEPRICE;
//   int numofapples;
//   int mymoney;
//
// public:
//   int initmembers(int price, int num, int money){
//     APPLEPRICE = price;
//     numofapples = num;
//     mymoney = money;
//   }
//   int saleapples(int money){
//     int num = money / APPLEPRICE;
//     numofapples -= num;
//     mymoney += money;
//     return num;
//   }
//   void sellresult(){
//     std::cout << "apples remain " << numofapples << '\n';
//     std::cout << "revenue " << mymoney << '\n';
//   }
// };
//
// class FruitBuyer{
// private:
//   int mymoney;
//   int numofapples;
// public:
//   int initmembers(int money){
//     mymoney = money;
//     numofapples = 0;
//   }
//   void buyapples(FruitSeller &seller, int money){ // message passing
//       numofapples += seller.saleapples(money); // message passing
//       mymoney -= money;
//   }
//   void buyresult(){
//     std::cout << "remain money " << mymoney <<'\n';
//     std::cout << "number of apples " << numofapples <<'\n';
//   }
// };
//
// int main(int argc, char const *argv[]) {
//   FruitSeller seller;
//   seller.initmembers(1000, 20, 0);
//   FruitBuyer buyer;
//   buyer.initmembers(5000);
//   buyer.buyapples(seller, 2000); // message passing
//
//   seller.sellresult();
//   buyer.buyresult();
//   return 0;
// }
// //object oriented programming


// //dynamic allocation new  and delete
// char * allocation(int len){
//   // char * str = (char*)malloc(sizeof(char)*len);
//   char * str = new char[len];
// }
//
// int main(int argc, char const *argv[]) {
//   char * str = allocation(20);
//   strcpy(str, "you are good");
//   std::cout << str << '\n';
//   //free(str);
//   delete []str;
//   return 0;
// }



// // reference3
// int& refreturn(int &ref){
//   ref++;
//   return ref;
// }
//
// int main(int argc, char const *argv[]) {
//   int num1 = 1;
//   int &num2 = refreturn(num1);
//   // int num2 = &num1
//
//   std::cout << num1 <<","<< num2 <<'\n';
//   num1++;
//   std::cout << num1 <<","<< num2 <<'\n';
//   num2++;
//   std::cout << num1 <<","<< num2 <<'\n';
//   return 0;
// }
// // reference3





// ///////reference2
// void Swap(int &ref1, int &ref2){
//   int temp = ref1;
//   ref1 = ref2;
//   ref2 = temp;
// }
//
// int main(int argc, char const *argv[]) {
//   int val1 = 10;
//   int val2 = 20;
//   Swap(val1, val2);
//   std::cout << val1 << '\n';
//   std::cout << val2 << '\n';
//   return 0;
// }
// ///////reference2



//////reference1
// int main(int argc, char const *argv[]) {
//   int num = 12;
//   int *ptr = &num;
//   int **dptr = &ptr;
//
//   int &ref = num;
//   int* (&pref) = ptr;
//   int** (&dpref) = dptr;
//
//   std::cout << ref << '\n';
//   std::cout << *pref << '\n';
//   std::cout << **dpref << '\n';
//   return 0;
// }
//////reference1


// ////////bool
// int main(int argc, char const *argv[]) {
//   int num = 10;
//   int i = 0;
//
//   std::cout << "true : " << true <<'\n';
//   std::cout << "false : " << false <<'\n';
//
//   while(true){
//     i++;
//     if (i>num)
//       break;
//   }
//   return 0;
// }
// ////////bool

// ////////namespace
// namespace Best{
//     void function();
// }
//
// namespace Nice{
//     void function();
// }
//
// int main(int argc, char const *argv[]) {
//     Best::function();
//     return 0;
// }
// void Best::function(){
//   std::cout << "function of Best" << '\n';
//   Nice::function();
// }
//
// void Nice::function(){
//   std::cout << "function of NICE";
// }
// ////////namespace


// ////////namespace
// namespace Best{
//     void function(){
//       std::cout << "function of Best" << '\n';
//     }
// }
//
// namespace Nice{
//     void function(){
//       std::cout << "functino of Nice" << '\n';
//     }
// }
//
// int main(int argc, char const *argv[]) {
//     Best::function();
//     Nice::function();
//     return 0;
// }
// ////////namespace


// ////////inline function
// inline int SQUARE( int x ){
//     return x * x;
// }
//
// int main(int argc, char const *argv[]) {
//   std::cout << SQUARE(5) << '\n';
//   std::cout << SQUARE(12) << '\n';
//   return 0;
// }
// ////////inline function



// //////////function overloading
//
// int function1 (int a){
//   std::cout << "function1 launched : " << a << '\n';
// }
//
// char function1 ( char a ){
//   std::cout << "function1 launched : " << a << '\n';
// }
//
// int main(int argc, char const *argv[]) {
//   function1(5);
//   function1('s');
//
//   return 0;
// }
//
// //////////function overloading








// void swap_int(int* const ptr1, int* const ptr2);
//
// void swap_int(int* ptr1, int* ptr2){
//   int temp = *ptr1;
//   *ptr1 = *ptr2;
//   *ptr2 = temp;
// }
//
// int main (){
//   int value1 = 0, value2 = 20;
//   int *ptr1 = &value1;
//   int *ptr2 = NULL;
//
//   ptr2 = &value2;
//
//   std::cout <<"Before : ptr1 = "<<*ptr1<<"/ptr2="<<*ptr2<< '\n';
//   swap_int(ptr1, ptr2);
//   std::cout <<"After : ptr1 = "<<*ptr1<<"/ptr2="<<*ptr2<< '\n';
//
//   return 0;
// }









//
// int main(){
//   int i, j;
//   for (int i=0; i<8; i++){
//     for(int j=0; j<8; j++){
//       if (i%2 == 0){
//         if (j%2 == 0){
//           std::cout << "222" ;
//         }else{
//           std::cout << "***" ;
//           // if(j == 7)
//           //   std::cout << '\n';
//         }
//
//       }else{
//         if (j%2 == 0){
//           std::cout << "***" ;
//         }else{
//           std::cout << "222" ;
//           // if(j == 7)
//           //   std::cout << '\n';
//         }
//       }
//     }
//     std::cout << std::endl;
//   }
//   return 0;
// }




























// struct Person{
// 	char name[20];
// 	int age;
// };
//
//
// int main(int argc, char const *argv[]) {
// 	struct Person *p1 = new struct Person[sizeof(struct Person)];
// 	void *ptr;
//
// 	strcpy(p1->name, "ephiker");
// 	p1->age = 30;
// 	std::cout << "age : " << p1->age <<'\n';
// 	std::cout << "name : " << p1->name <<'\n';
// 	ptr = p1;
// 	// (Person*)ptr
//
//
// 	std::cout << "age : " << ((struct Person*)ptr)->age <<'\n';
// 	std::cout << "name : " << ((struct Person*)ptr)->name <<'\n';
//
//
//
// 	return 0;
// }



// int main(int argc, char const *argv[]) {
// 	int sizeX = 1280, sizeY = 720, sizeZ = 480;
// 	int ***arr;
// 	int i,j;
//
//
// 	arr = new int**[sizeX];
// 	for(i = 0; i<sizeX; i++){
// 		arr[i] = new int*[sizeY];
// 		for(j = 0; j<sizeY; j++){
// 			arr[i][j] = new int[sizeZ];
// 		}
// 	}
//
// 	arr[100][100][100] = 100;
// 	std::cout << arr[100][100][100] << '\n';
//
// 	for(i=0; i<sizeX; i++){
// 			for(j=0;j<sizeY;j++){
// 				delete[] arr[i][j];
// 			}
// 			delete[] arr[i];
// 	}
// 	delete[] arr;
//
//
// 	arr[100][100][100] = 100;
// 	std::cout << arr[100][100][100] << '\n';
//
//
//
// 	return 0;
// }

// int main(int argc, char const *argv[]) {
// 	int sizeX = 1280;
// 	int sizeY = 720;
// 	int j, i;
//
// 	int **arr;
// 	arr = new int*[sizeY];
// 	for(j = 0; j<sizeY; j++){
// 		arr[j] = new int[sizeX];
// 	}
//
// 	for(j = 0; j< sizeY; j++){
// 		delete[] arr[j];
// 	}
// 	delete[] arr;
//
// 	return 0;
// }


// void swap(int*a, int*b){
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
//
// void swap(char*a,char*b){
// 	char temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
//
// void swap(double*a,double*b){
// 	double temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
//
//
// int main(int argc, char const *argv[]) {
// 	int num1 = 20, num2 = 30;
// 	swap(&num1, &num2);
// 	std::cout << num1 << ' ' << num2 <<'\n';
//
// 	char str1 = 'A', str2 = 'Z';
// 	swap(&str1, &str2);
// 	std::cout << str1 << ' ' << str2 <<'\n';
//
// 	double dbl1 = 1.111, dbl2 = 5.555;
// 	swap(&dbl1, &dbl2);
// 	std::cout << dbl1 << ' ' << dbl2 <<'\n';
//
// 	return 0;
// }



//
// bool leapYear(int year){
// 		if(year%400==0)
// 			return true;
// 		if(year%4==0)
// 			if (year%100!=0)
// 				return true;
// 		return false;
// }
//
//
// int main(int argc, char const *argv[]) {
// 	int year;
// 	std::cout << "\nINPUT : " ;
// 	std::cin >> year;
// 	if(leapYear(year))
// 		std::cout << "Leap Year" << '\n';
// 	else
// 		std::cout << "Common Year" << '\n';
// 	return 0;
// }




//
// int main(void) {
//
//   int**coordinate;
//   int xSize, ySize;
// 	int i, j;
// 	std::cout << "input array x-size:";
// 	std::cin >> xSize;
// 	std::cout << "input array y-size:";
// 	std::cin >> ySize;
//
// 	coordinate = new int*[ySize];
// 	for (i = 0; i < ySize; i++){
// 		coordinate[i] = new int[xSize];
// 	}
//
// 	for (i = 0; i < ySize; i++){
// 		for (j = 0; j <xSize; j++){
// 			coordinate[j][i] = 4; //special_value;
// 		}
// 	}
//
// 	std::cout << coordinate[10][10] << '\n';
//
//
//
// 	return 0;
// }




//
// int main(int argc, char const *argv[]) {
// 	int s;
// 	std::cout << "input array size:";
// 	std::cin >> s;
// 	char* info;
// 	// info = (char*)malloc(sizeof(char)*sizeof(s));
// 	info = new char[s];
// 	std::cout << "input:";
// 	std::cin >> info;
//
// 	std::cout << "User Input:" << info <<'\n';
//
// 	return 0;
// }




// void min(int a, int b){
// 	std::cout << a << '\n';
// 	std::cout << b << '\n';
// }
//
// void min(char c, char d){
// 	std::cout << c << '\n';
// 	std::cout << d << '\n';
// }
//
// // min(2.3, 5.6) 호출하면
// // float이 없기 때문에 그나마 비슷한 int min에 맞춰주기 위해
// // 2와 5로 바꿔서 int min이 호출된다
//
// int main(int argc, char const *argv[]) {
// 	min(2.3, 5.6);
// 	return 0;
// }



//
// struct Student{
// 	int score;
// 	char name[8];
// };
// int main(int argc, char const *argv[]) {
// 	struct Student mystudent;
// 	mystudent.score = 500;
// 	struct Student* yourstudent;
// 	yourstudent = &mystudent;
// 	std::cout << yourstudent->score << '\n';
// 	// yourstudent->name = "ephiker";
// 	strcpy(yourstudent->name, "ephiker");
// 	std::cout << yourstudent->name << '\n';
// 	return 0;
// }




//
//
//
// int main(int argc, char const *argv[]) {
//
// 	int a= 10;
// 	int b= 20;
// 	char c;
// 	char *iptr; //캐릭터포인터란? 캐릭터 변수의 주소를 담을 수 있는 변수
// 	iptr =(char*)&a;//주소값은? a의 로케이션을 캐릭터 포인터로 해석한다는 타입캐스팅.. 밸류(주소)를 캐릭터포인터로 사용..
// 	b=*((int*)iptr);//b에 10이 대입된다. b = *iptr
//
// 	// 그렇다면 c = *iptr; 라면 c에 들어가는 값은 무엇인가
// 	// 10이 들어가야 하는데, 00 00 00 0A 에서 맨 앞 1바이트 부분은 00이 들어간다
//
//
// 	return 0;
// }
// 	int sumAry(int num,int ary[]){
// 		int sum = 0;
// 		int i;
// 		for (i = 0; i<num; i++){
// 			sum += ary[i];
// 		}
// 		return sum;
// 	}
//
// int main(int argc, char const *argv[]) {
// 	int iary[5]={3,5,7,9,11};
// 	int x;
//
// 	x = sumAry(5, iary);
// 	std::cout << "Sum: " << x << '\n';
//
//
// 	return 0;
// }


// int main(int argc, char const *argv[]) {
// 	int i, div, score[10];
// 	char grades[10];
// 	std::cout << "input 10 scores." << '\n';
// 	for(i=0; i<10; i++){
// 		std::cin >> score[i];
// 		div = score[i] / 10;
// 		switch (div) {
// 			case 10:
// 			case 9: grades[i] = 'A';
// 				break;
// 			case 8: grades[i] = 'B';
// 				break;
// 			case 7: grades[i] = 'C';
// 				break;
// 			case 6: grades[i] = 'B';
// 				break;
// 			default: grades[i] = 'F';
// 				break;
// 				}
// 	}
// 	for (i=0; i<=9; i++)
// 		printf("[%2d](%3d/100)%c\n", i, score[i], grades[i]);
// 	return 0;
// }
//








// // using namespace std;
//
//
// // struct Point{
// int main(void){
// 	int __;
// 	__ = __;
// 	std::cout << __ << '\n';
// 	return 0;
// }


// 	int xpos;
// 	int ypos;
//
// 	void MovePos(int x, int y){
// 		xpos = xpos + x;
// 		ypos = ypos + y;
// 	};
// 	void AddPoint(const Point &pos){
// 		xpos = xpos + pos.xpos;
// 		ypos = ypos + pos.ypos;
// 	};
// 	void ShowPosition(){
// 		std::cout << "x : " << xpos << '\n';
// 		std::cout << "y : " << ypos << '\n';
// 	};
// };
//
//
// int main(void){
// 	Point pos1={12,4};
// 	Point pos2={20,30};
// 	pos1.MovePos(-7, 10);
// 	pos1.ShowPosition();
// 	pos1.AddPoint(pos2);
// 	pos1.ShowPosition();

// 	return 0;
// }






//
// const int OPEN=1;
// const int CLOSE=0;
//
// class Door{
// private:
// 	int state;
//
// public:
// 	void open();
// 	void close();
// 	void showstate();
// };
//
//
// void Door::open(){
// 	state=OPEN;
// }
// void Door::close(){
// 	state=CLOSE;
// }
// void Door::showstate(){
// 	std::cout << ((state==OPEN)? "OPEN" : "CLOSE") << '\n';
// }
//
//
// int main(){
// 	Door d;
// 	d.open();
// 	d.showstate();
// 	d.close();
// 	d.showstate();
// }







//
// class Counter{
// public:
// 	int val;
// 	void Increment(void)
// 	{
// 		val++;
// 	}
// };
//
// int main(void){
// 	Counter cnt;
// 	cnt.val=0;
// 	cnt.Increment();
// 	std::cout << cnt.val << '\n';
// 	return 0;
//
// }




// struct Account{
// 	char accID[20];
// 	char accPW[20];
// 	char name[20];
// 	int balance;
//
// 	void Deposit(int money){
// 		balance+=money;
// 	}
//
// 	void Withdraw(int money){
// 		balance-=money;
// 	}
// };
//
// int main(void){
//
// 	struct Account ephiker = {"ephikerAcc", "1234", "Andre", 1000};
// 	std::cout << ephiker.accID << '\n';
// 	std::cout << ephiker.accPW << '\n';
// 	std::cout << ephiker.name << '\n';
// 	std::cout << ephiker.balance << '\n';
//
// 	ephiker.Deposit(500);
// 	std::cout << ephiker.balance << '\n';
// 	ephiker.Withdraw(200);
// 	std::cout << ephiker.balance << '\n';
//
//
// 	return 0;
// }
