#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	char satz[80];
	printf("Geben Sie einen Satz ein:\n");
	gets_s(satz);
	printf("Anzahl Zeichen: %i\n", strlen(satz));
	
	
	system("pause");
}