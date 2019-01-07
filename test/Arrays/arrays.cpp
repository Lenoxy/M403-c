#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	float array[4];

	array[0] = 23.65;
	array[1] = 26.78;
	array[2] = 28.97;
	array[3] = 26.43;
	array[4] = 25.76;

	float summe = 0;

	for (int i = 0; i <= 4; i++) {
		summe += array[i];
	}
	summe /= 5;
	printf("Die Durchschnitstemperatur ist: %lg Grad Celsius\n", summe);

	system("pause");
}