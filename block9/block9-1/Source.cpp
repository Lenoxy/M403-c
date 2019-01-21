#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	int Alter[] = { 18, 13, 15, 16, 20, 19, 14, 13, 19 };
	int temp = sizeof(Alter) / sizeof(Alter[0]);
	for (int i = 0; i < temp; i++) {
		printf("%i. Alter = %i\n", i + 1, Alter[i]);
	}

	int höchstesAlter = 0;
	int kleinstesAlter = 0;

	for (int i = 0; i < temp; i++) {
		if (Alter[i] > höchstesAlter) {
			höchstesAlter = Alter[i];
		}
		if (Alter[i] < kleinstesAlter) {
			kleinstesAlter = Alter[i];
		}
	}



	system("pause");
}