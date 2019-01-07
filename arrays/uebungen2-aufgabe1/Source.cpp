#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
void draw(int breite, int hoehe);


void main() {
	int breite = 0, hoehe = 0;
	printf("Geben Sie die breite ein: ");
	scanf_s("%i", &breite);
	printf("Geben Sie die hoehe ein: ");
	scanf_s("%i", &hoehe);
	draw(breite, hoehe);
	system("pause");
}

void draw(int breite, int hoehe) {
	for (int ih = 0; ih <= hoehe; ih++) {
		for (int ib = 0; ib <= breite; ib++) {
			printf("*");
		}
		printf("\n");
	}
}