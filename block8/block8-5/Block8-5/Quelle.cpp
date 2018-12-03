#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	char cWahl = '0';
	float fRadiusAussen, fRadiusInnen, fHoehe, fVolumen = 0;
	const float Pi = 3.1415926535;
	printf("----------------------------------------\n");
	printf("Berechnung von Geometrischen Körpern\n");
	printf("----------------------------------------\n\n");
	printf("Bitte wählen Sie einen geometrischen Körper: [Z = Zylinder, H = Hohlzylinder]");
	scanf_s("%c", &cWahl);

	if ('Z' == cWahl || 'z' == cWahl) {
		printf("Radius:");
		scanf_s("%f", &fHoehe);
		printf("Hoehe:");
		scanf_s("%f", &fHoehe);
		fVolumen = Pi * fRadiusAussen * fRadiusAussen * fHoehe;
		printf("Das Volumen ist: %0.3f", fVolumen);
	}
	else if ('H' == cWahl ||'h' == cWahl){
		printf("Radius Aussen:");
		scanf_s("%f", &fRadiusAussen);
		printf("Radius Innen:");
		scanf_s("%f", &fRadiusInnen);
		printf("\nHoehe");
		scanf_s("%f", &fHoehe);
		fVolumen = Pi * (fRadiusAussen * fRadiusAussen - fRadiusInnen * fRadiusInnen) * fHoehe;
		printf("Das Volumen ist gleich: %f", &fVolumen);


	}
	system("pause");
}