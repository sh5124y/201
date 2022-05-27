#include <iostream>
using namespace std;

#define jegob(A) ((A)*(A))

int main(void)
{
	cout << jegob(3+1) << endl;
	cout << ((3+1) * (3+1)) << endl;//위에꺼랑 같음

	return 0;
}