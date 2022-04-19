#include <iostream>
using namespace std;


void plus2(int& num)
{
	//num이 참조형 변수이기에 *를 안써서 내부값을 처리
	num += 2;
}

int main(void) {

	int a = 3;
	//참조형 매개변수 num에게 주소값으로 전달
	plus2(a);
	cout << a << endl;

	return 0;
}
