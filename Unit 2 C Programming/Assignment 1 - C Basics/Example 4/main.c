#include <stdio.h>
int main()
{
	float number1, number2;
	printf("Enter two numbers: ");
	fflush(stdout);

	scanf("%f %f", &number1,&number2);

	float product = number1 * number2;

	printf("Product: %f", product);

	return 0;
}
