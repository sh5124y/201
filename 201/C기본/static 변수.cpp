﻿#include <iostream>
using namespace std;

void jungjuk(void) {
	int a = 0;
	cout << "지역변수 a는" << a << endl;
	a++;
}

int main(void) {
	jungjuk();
	jungjuk();
	jungjuk();
}
