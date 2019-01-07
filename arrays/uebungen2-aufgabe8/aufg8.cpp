#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {

	double f1, f2;

	printf("Faktor 1: ");
	scanf_s("%lg", &f1);
	printf("Faktor 2: ");
	scanf_s("%lg", &f2);
	for (int i = 0; i <= f1; i++) {
		f1 += f2;
	}
	printf("%lg", f1);


}