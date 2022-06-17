#include <iostream>
#include <string.h>

using namespace std;

class student {
private:
    int nHakbun;
    char* sName;

public:
    //������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
    //��ȯ���� �������� �ʴ´�.
    student();
    student(int Hakbun, const char* Name);
    student(const student& rhs);
    ~student();
    student& operator=(const student& rhs);

    void show();

};

student::student() {


}
//��������� �ʱ�ȭ �� �� ������ ����
//const�� ������ ������ ������ ��������� �� �� �ִ�

student::student(int Hakbun, const char* Name)
    :nHakbun(Hakbun) //�������(�Ű�����)
{
    cout << "student �Ϲݻ����� ȣ��." << endl;
    int len = strlen(Name) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
    sName = new char[len];      //������ŭ �޸� �Ҵ�
    strcpy(sName, Name);
}

//���� �ۼ� ���ص� �����Ϸ��� �˾Ƽ� ������ִ�
//���������
student::student(const student& rhs)
    :nHakbun(rhs.nHakbun), sName(rhs.sName)
{
    cout << "student �Ϲݻ����� ȣ��." << endl;
    int len = strlen(rhs.sName) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
    sName = new char[len];      //������ŭ �޸� �Ҵ�
    strcpy(sName, rhs.sName);
}

student :: ~student()
{
    delete[]sName;
    cout << "student �Ҹ��� ȣ��." << endl;
}

void student::show() {
    cout << "�й���" << nHakbun << "�Դϴ�" << endl;
    cout << "�̸���" << sName << "�Դϴ�" << endl << endl;
}

//���Կ����� �����ε�
student& student::operator=(const student& rhs)
{
    nHakbun = rhs.nHakbun;

    cout << "student ���Կ����� ȣ��." << endl;
    int len = strlen(rhs.sName) + 1; //�ζ����� �ϳ� �߰�, ������ ���� �ľ�
    sName = new char[len];      //������ŭ �޸� �Ҵ�
    strcpy(sName, rhs.sName);

    return *this;
}

class HighSchoolStudent : public student
{
public:
    HighSchoolStudent(int Hakbun, const char* Name, bool isD)
        : student(Hakbun, Name), isDormotory(isD) {
        cout << "highschoolstudent ������ ȣ��." << endl;
    }
    ~HighSchoolStudent()
    {
        cout << "highschoolstudent �Ҹ��� ȣ��." << endl;
    }
private:
    bool isDormotory;

};

int main(void) {

    HighSchoolStudent hss = HighSchoolStudent(1111, "JWP", false);
    hss.show();

    return 0;
}