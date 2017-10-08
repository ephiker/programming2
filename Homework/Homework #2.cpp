#include <iostream>


int main(int argc, char **argv) {


    //Variable Size
    std::cout << "Problem01" << '\n';
    {
      short b; char ch; float f;
      std::cout << "int : " << sizeof(int) << " short int : "<< sizeof(b) << '\n';
      std::cout << "char : " << sizeof(ch) << " float : "<< sizeof(f) << '\n';
      std::cout << "double : " << sizeof(double) << '\n';
      std::cout << "long : " << sizeof(long) << '\n';

    }
    std::cout << '\n';

    //Find and correct the semantic error
    std::cout << "Problem02" << '\n';
    //global variable
    int scope = 1;
    {
      //local variable
      int scope = 2;
      std::cout << scope << '\n';
    }
    std::cout << '\n';

    //Find and correct the syntax error
    std::cout << "Problem03" << '\n';
    {
      int variable1 = 10;
      std::cout << "location = "  << &variable1 << '\n';
      std::cout << "size = " << sizeof(variable1) << '\n';
      std::cout << "value = " << variable1 << '\n';
    }
      std::cout << '\n';



  return 0;
}
