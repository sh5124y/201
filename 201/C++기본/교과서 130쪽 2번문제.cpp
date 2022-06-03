#include <iostream>
#include <string>

using namespace std;

class CBank{
private:
	string name;
	string account;
	int balance;
public:
	CBank(string name, string account, int balance);

	void deposit(int amount);

};

int main(void)
{
	return 0;
}

CBank::CBank (string name, string account, int balance) 
	:name(name), account(account), balance(balance)
{

}
	

void CBank::deposit(int amount) {
	cout << "입금된 금액은" << amount << "입니다";
	balance += amount;
}