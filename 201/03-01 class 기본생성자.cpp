#include <iostream>
#include <string>

using namespace std;

class student {
private :
	int nHakbun;
	string sName;

public:	
	//생성자 : 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
	student() {
		nHakbun =1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;

	}

};

int main(void) {
	student stu;
	
}