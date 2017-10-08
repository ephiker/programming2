#include <iostream>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
  char opr;
  int oprnd_1;
  int oprnd_2;
  float result;

  char buff[1000]; //ARRAY
  std::cin.getline(buff, 1000, '\n'); //take

  int n0 = int(buff[0]-'0');
  int n1 = int(buff[1]-'0');
  int n2 = int(buff[2]-'0');
  int n4 = int(buff[4]-'0');
  int n5 = int(buff[5]-'0');
  int n6 = int(buff[6]-'0');
  opr = buff[3];

  oprnd_1 = n0*100 + n1*10 + n2*1;
  oprnd_2 = n4*100 + n5*10 + n6*1;

//  std::cout << oprnd_1 << '\n';
//  std::cout << oprnd_2 << '\n';
//  std::cout << opr << '\n';

  switch (opr) {
    case '+':
    result = oprnd_1 + oprnd_2;
    std::cout << result << '\n';
    break;
    case '-':
    result = oprnd_1 - oprnd_2;
    std::cout << result << '\n';
    break;
    case '*':
    result = oprnd_1 * oprnd_2;
    std::cout << result << '\n';
    break;
    case '/':
    result = (float)oprnd_1 / (float)oprnd_2;
    std::cout << result << '\n';
    break;
  }

  return 0;
}
