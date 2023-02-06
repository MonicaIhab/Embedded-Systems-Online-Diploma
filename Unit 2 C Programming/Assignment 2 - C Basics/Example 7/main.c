#include<stdio.h>

int main() {
	int number, i;
	int Factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &number);

	if (number < 0)
		printf("Error!! Factorial of negative number doesn't exist.");
	else if (number == 0)
		printf("Factorial =  1");
	else
		{
		for (i = 1; i<= number; i++)
			{
			Factorial = Factorial * i;
			}
	    printf("Factorial = %d", Factorial);
		}

	return 0;
}
