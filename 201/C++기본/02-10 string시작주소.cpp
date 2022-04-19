#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용
#include<string>//std::string클래스 사용
using namespace std;


int main(void) {
	char cI[10] = "aaa";
	printf("%s\n", cI);

	string cppI = "aaa";
	printf("%s\n", cppI.c_str());

}
