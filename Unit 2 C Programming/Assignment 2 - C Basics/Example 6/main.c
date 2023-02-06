#include<stdio.h>

int main() {
	int number, i;
	int sum = 0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &number);

	for (i=1; i<=number; i++)
		{
			sum = sum + i;
		}
	printf("Sum = %d", sum);
	return 0;
}
