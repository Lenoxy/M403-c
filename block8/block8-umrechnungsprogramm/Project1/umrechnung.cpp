#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getMode() {
	bool isInputValid = false;
	int mode = 0;
	printf("Geben Sie eine 1 ein, um von Celsius auf Kelvin umzurechnen.\nGeben Sie eine 2 ein, um von Kelvin auf Celsius umzurechnen.\n");
	while(isInputValid == false){
		scanf_s("%i", &mode);
		switch (mode) {
		case 1:
			isInputValid = true;
			break;
		case 2:
			isInputValid = true;
			break;
		default:
			printf("Falsche Eingabe. Bitte Versuchen Sie es Erneut:\n");
			isInputValid = false;
			break;
		}
	}
	
	return mode;
}

 double getNumbers() {
	double input=0;
	printf("Geben Sie nun Ihre zu rechnende Zahl ein:\n");
	scanf_s("%lf", &input);
	return input;
}



double doCalculation(int mode, double input){
	double result = 0;
	if (mode == 1) {
		result = input + 273.15;
	}
	else {
		result = input - 273.15;
	}
	return result;
}

void printResult(double result, int mode, double input) {
	if (mode == 1) {
		printf("\n%lg Grad Celsius ergeben %lg Grad Kelvin.\n", input, result);
	}
	else if (mode == 2) {
		printf("\n%lg Grad Kelvin ergeben %lg Grad Celsius.\n", input, result);
	}
}



void main() {
	int mode = getMode();
	double input = getNumbers();
	double result = doCalculation(mode, input);
	printResult(result, mode, input);
	system("pause");
}