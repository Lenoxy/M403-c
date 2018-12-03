#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void rrr(double, double);
void main() {
	double l, w;
	scanf_s("%lf", &l);
	scanf_s("%lf", &w);
	rrr(l, w);
	system("pause");
}

void rrr(double length, double width) {
	double a = length * width;
	printf("Die flaeche ist %d\n", a);
}