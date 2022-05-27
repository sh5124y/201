#include <iostream>
#include <string.h>

using namespace std;


class Person {
private:
	string sName;
protected:
	int nAge;

public:
	Person();
	Person (string name,int age );
	void hi();
};



Person::Person()
{
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) {

}

void Person::hi()
{
	cout <<"이름 : "<< sName << "나이 : " << nAge << endl;
}

class Student : public Person {
private:
	int nHakbun;

public:
	Student();
	Student(string name, int age, int hakbun);
	void study();

};

Student::Student() :Person() {
	nHakbun = 0;
}

Student :: Student(string name, int age, int hakbun)
	:Person(name,age), nHakbun(hakbun){}

void Student::study()
{
	hi();
	cout << "학번: " << nHakbun;
}

int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("윤덕구", 100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();
	Student stu;
	//stu.nAge = 100; //에러남

	delete person;
	delete[] people;
}

class CBox {
	public:
		double width;
};

class ChuldBox : CBox {
public:
	void setwidth(double w) {
		width = w;
	}
};

