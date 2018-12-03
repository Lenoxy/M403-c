#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	double radius = 0, pi = 3.141592653589793238, flaeche = 0;
	printf("Geben Sie den Radius ein: ");
	scanf_s("%lg", &radius);
	flaeche = radius * pi;
	printf("\n%lg\n", flaeche);
	system("pause");
}