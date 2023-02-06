#include<stdio.h>

int main() {
	float number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &number);

	if (number > 0)
		printf("%.2f is a positive number", number);
	else if (number == 0)
		printf("You entered a zero");
	else
		printf("%.2f is a negative number", number);

	return 0;
}
