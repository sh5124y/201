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
	this -> nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
student::student(int Hakbun, string Name)
{
	this -> nHakbun = Hakbun;
	this -> sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void student :: show() {
	cout << "�й���" << nHakbun << "�Դϴ�" << endl;
	cout << "�̸���" << sName << "�Դϴ�" << endl << endl;
}
int main(void) {
	//student stu1 = student();
	//stu1.show();

	//student stu2 = student(1111,"JWP");
	//stu2.show();

	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;

	return 0;
}