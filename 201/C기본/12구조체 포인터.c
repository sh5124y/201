#include <stdio.h>

typedef struct {
	float x;
	float y;
}point;

void AddValueToPoint(point p);

int main(void)
{
	point point;	//stack할당
	point.x = 5.0f;
	point.y = 10.0f;
	//call by value라서 값이 안 바뀜
	AddValueToPoint(point);
	printf("%1.f,%1.f\n", point.x, point.y);

	return 0;
}

void AddValueToPoint(point p) {
	p.x += 10.0f;
	p.y += 14.0f;
}
