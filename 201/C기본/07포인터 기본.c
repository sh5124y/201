#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	//ptr1가 num2를 가리킴
	ptr1 = ptr2;
	//ptr2가 num3을 가리킴
	ptr2 = ptr3;
	
	*ptr3 *= 2; //num3이90(45*2)
	*ptr1 *= *ptr3; // num2 120(30+90)
	*ptr2 *= 2; //num3 180(90+2)
	printf(" %d, %d, %d", *ptr1, *ptr2, *ptr3);
}

