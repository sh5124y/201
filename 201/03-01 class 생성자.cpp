#include <iostream>
#include <string>

using namespace std;

class student {
private :
	int nHakbun;
	string sName;

public:	
	//������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�.
	student();

	void show();

};
student::student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
void student :: show() {
	cout << "�й���" << nHakbun << "�Դϴ�" << endl;
	cout << "�̸���" << sName << "�Դϴ�" << endl;
}
int main(void) {
	student stu;
	stu.show();
}