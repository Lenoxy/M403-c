#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int input = 0;
	scanf_s("%i", &input);
	switch (input) {
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default:
		printf("else\n");
		break;
	}
	system("pause");
}