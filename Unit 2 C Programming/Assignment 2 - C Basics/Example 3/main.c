#include<stdio.h>

int main() {
	float number1, number2, number3, largest;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &number1, &number2, &number3);

	largest = number1 > number2 ? (number1 > number3 ? number1 : number3) : (number2 > number3 ? number2 : number3);

	printf("Largest of three numbers is %.2f", largest);

	return 0;
}
