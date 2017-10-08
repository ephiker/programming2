#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdio>

int main(int argc, char const *argv[]) {


  const int a = 5;
  std::cout << a << '\n';
  a = 10;
  std::cout << a << '\n';

  // //기본 출력
  // std::cout << "Hello, World!" << std::endl;

  // //기본 입력
  // char name[10];
  // std::cin >> name;
  // std::cout << "Your name is " << name << '\n';

  // //이름공간
  // using namespace std; //이름공간 std에 선언된 모든 것에 대해 이름공간 지정 생략
  // cout << "Hello, World!" << endl;

  // // 문자배열 선언
  // char arr[5];
  // std::cin >> arr;
  // std::cout << "arr : " << arr <<'\n';

  // // 2차원배열 선언 : array[numofRow][numofCol]
  // int array2D[2][3] = {{0,1,2},{0,1,2}};
  // // std::cout << array2D[1][0] << '\n';
  // // std::cout << array2D[1][1] << '\n';
  // // std::cout << array2D[1][2] << '\n';
  // int i,j;
  // for (i=0; i<2; i++){
  //   for (j=0; j<3; j++){
  //     std::cout << array2D[i][j] << '\n';
  //   }
  // }

  // //배열과 포인터 : 배열의 이름은 주소값
  // int Array[5] = {44, 77, 64, 13, 42};
  // int i;
  // std::cout << "Array:" << Array << '\n';
  // for (i=0;i<5;i++){
  //   std::cout << "Array["<<i<<"]: " << &Array[i] << '\n';
  // }

  // // 동적할당
  // int * ptr1 = new int; //int형 변수를 위한 메모리 할당
  // delete ptr1;
  //
  // int * arr1 = new int[3]; //길이가 3인 int형 배열의 할당
  // delete []arr1; //int형 배열의 소멸
  //
  // char * str = new char[20]; //길이가 20인 문자열 배열의 할당
  // strcpy(str, "ephiker");
  // std::cout << str << '\n';
  // delete []str;

  // //2차원 배열 동적 할당
  // int i, j;
  // int x_size = 10;
  // int y_size = 5;
  // int **array2D;
  // array2D = new int*[y_size]; //int형 포인터를 담는 배열 생성
  // for (i=0; i<y_size; i++){ //세로로 먼저 만들고
  //   array2D[i] = new int[x_size]; //가로로 int형 변수를 담는 배열을 할당
  // }
  // //초기화
  // for (i=0; i<y_size; i++){
  //   for (j=0; j<x_size; j++){
  //     array2D[i][j] = 0;
  //   }
  // }
  // //참조
  // for (i=0; i<y_size; i++){
  //   for (j=0; j<x_size; j++){
  //     std::cout << array2D[i][j] << '\n';
  //   }
  // }
  // //해제
  // for (i=0; i<y_size; i++){
  //   delete[] array2D[i]; //배열의 i번째 요소에 저장된 배열 삭제
  // }
  // delete[] array2D;



  // //3차원 배열 동적 할당
  // int i, j, k;
  // int x_size = 10;
  // int y_size = 10;
  // int z_size = 10;
  // //할당
  // int ***array3D;
  // array3D = new int **[z_size];
  // for(i=0; i<z_size; i++){
  //   array3D[i] = new int *[y_size];
  //   for(j=0;  j<y_size; j++){
  //     array3D[i][j] = new int[x_size];
  //   }
  // }
  // //해제
  // for (i=0; i<z_size; i++){
  //   for (j=0l j<y_size; j++){
  //     delete[] array3D[i][j];
  //   }
  //   delete[] array3D[i];
  // }
  // delete[] array3D;
  //

  // // 구조체
  // struct student {
  //   int id;
  //   char *name;
  //   float percentage;
  //   void Show(){ //매개변수 없이 위에 선언된 구조체에 접근
  //     std::cout << id << '\n';
  //     std::cout << name << '\n';
  //     std::cout << percentage << '\n';
  //   }
  // };
  //
  // struct student s;

  // // 접근 제어 지시자 뚫기
  // struct student {
  // private:
  //   int id;
  //   char *name;
  //   float percentage;
  // public:
  //   void SetInfo(int _id, char* _name, float _percentage);
  //   void Show();
  // };
  //
  // void student::SetInfo(int _id, char* _name, float _percentage){
  //   id = _id;
  //   name = _name;
  //   percentage = _percentage;
  // }
  //
  // void student::Show(){
  //   std::cout << "id : " << id << '\n';
  //   std::cout << "name : " << name << '\n';
  //   std::cout << "percentage : " << percentage << '\n';
  // }
  //
  // int main(int argc, char const *argv[]) {
  //   student Ephiker;
  //   Ephiker.SetInfo(21000348, "ephiker", 99.9);
  //   Ephiker.Show();
  //   return 0;
  // }

  // //보이드 포인터
  // struct Person{
  //   char name[20];
  //   int age;
  // };
  //
  // int main(int argc, char const *argv[]) {
  //   struct Person *p1 = new struct Person[sizeof(struct Person)]; //구조체 메모리 동적 할당
  //   void *ptr;
  //
  //   strcpy(p1->name, "ephiker"); //포인터 변수 p1이 가리키는 구조체 변수의 멤버인 name에 접근
  //   p1->age = 27;
  //   ptr = p1; //보이드 포인터로 ephiker,27 구조체에 접근하기, 형변환 필요함
  //   //ptr->name에서 ptr에 구조체 형으로 변환
  //   //(ptr)->name에서 구조체 변수를 가리키는 포인터 타입으로
  //   //((struct Person*)ptr)->name
  //   std::cout << ((struct Person*)ptr)->name << '\n';
  //   std::cout << ((struct Person*)ptr)->age << '\n';
  //   delete p1;
  //
  //   return 0;
  // }

  // // 스트링과 포인터
  // char name1[10] = "handong";
  // char name2[] = "handong";
  // char *name3 = "handong";
  //
  // std::cout << "name1" <<" length : " << strlen(name1) << " size : " << sizeof(name1)<< '\n'; //Given Size
  // std::cout << "name2" <<" length : " << strlen(name2) << " size : " << sizeof(name2)<< '\n'; //7+NULL
  // std::cout << "name3" <<" length : " << strlen(name3) << " size : " << sizeof(name3)<< '\n'; //Pointer Size

  // //엔터 앤 디스플레이 스트링
  // int t, i;
  // char text[100][80];
  // for(t=0; t<100; t++){
  //   std::cout << t <<":";
  //   gets(text[t]);
  //   if(!text[t][0])
  //     break;
  // }
  // for(i=0; i<t; i++)
  //   std::cout << text[i] << '\n';


  return 0;
}
