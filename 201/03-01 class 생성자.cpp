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
	student(int Hakbun, string Name);

	void show();

};
student::student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
student::student(int Hakbun, string Name)
{
	nHakbun = Hakbun;
	sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void student :: show() {
	cout << "�й���" << nHakbun << "�Դϴ�" << endl;
	cout << "�̸���" << sName << "�Դϴ�" << endl << endl;
}
int main(void) {
	student stu1 = student();
	stu1.show();

	student stu2 = student(1111,"JWP");
	stu2.show();
}