#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

//sum function
int sumAry(int num, int ary[]){
	int sum = 0;
	int i;
	for (i = 0; i<num; i++){
		sum = sum + ary[i];
	}
	return sum;
}


//main
int main(int argc, char const *argv[]) {
	int item[5]={1,2,3,4,5};
	int sum;
	int len = sizeof(item)/sizeof(int); //length of array

	sum = sumAry(len, item);
	std::cout << "Sum: " << sum << '\n';

	return 0;
}
