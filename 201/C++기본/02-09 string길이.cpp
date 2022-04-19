#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용
#include<string.h>//strlen사용
#include<string>//std::string클래스 사용
using namespace std;


int main(void) {
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;

}
