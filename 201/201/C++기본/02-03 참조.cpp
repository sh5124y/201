#include <iostream>
using namespace std;

int main(void) {

	//포인터로 a 값을 바꿈
	int a = 3;
	int* pa = &a;
	*pa = 30;
	cout << a << endl;

	//참조로 a 값을 바꿈
	int& ra = a;
	ra = 50;
	cout << a << endl;

	return 0;
}
