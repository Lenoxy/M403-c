#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	char cWahl = '0';
	float fRadiusAussen = 0, fRadiusInnen = 0, fHoehe = 0, fVolumen = 0;
	const float Pi = 3.1415926535;
	printf("----------------------------------------\n");
	printf("Berechnung von Geometrischen K�rpern\n");
	printf("----------------------------------------\n\n");
	printf("Bitte w�hlen Sie einen geometrischen K�rper: [Z = Zylinder, H = Hohlzylinder]");
	scanf_s("%c", &cWahl);

	if ('Z' == cWahl || 'z' == cWahl) {
		zylinder(fHoehe, fVolumen, Pi, fRadiusAussen);
	}
	else if ('H' == cWahl ||'h' == cWahl){
		hohlzylinder(fRadiusAussen, fRadiusInnen, fHoehe, Pi, fVolumen);
	}

	system("pause");
}



void hohlzylinder(float fRadiusAussen, float fRadiusInnen, float fHoehe, float Pi, float fVolumen) {

	printf("Radius Aussen:");
	scanf_s("%f", &fRadiusAussen);
	printf("Radius Innen:");
	scanf_s("%f", &fRadiusInnen);
	printf("Hoehe:");
	scanf_s("%f", &fHoehe);
	fVolumen = Pi * (fRadiusAussen * fRadiusAussen - fRadiusInnen * fRadiusInnen) * fHoehe;
	printf("Das Volumen ist gleich: %lg\n", &fVolumen);

}

void zylinder(float fHoehe, float fVolumen, float Pi, float fRadiusAussen) {
	printf("Radius:");
	scanf_s("%f", &fHoehe);
	printf("Hoehe:");
	scanf_s("%f", &fHoehe);
	fVolumen = Pi * fRadiusAussen * fRadiusAussen * fHoehe;
	printf("Das Volumen ist: %0.3f", fVolumen);
}