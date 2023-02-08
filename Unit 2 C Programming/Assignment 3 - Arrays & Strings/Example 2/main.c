#include<stdio.h>

int main() {
	int size, i;
	float sum=0;
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d", &size);

	float arr[size];

	for (i=0;i<size;i++)
	{
		printf("Enter number: ");
		fflush(stdout);
		scanf("%f", &arr[i]);
		fflush(stdin);
	}

	for (i=0;i<size;i++)
		{
			sum = sum + arr[i];
		}
	printf("Average= %.2f", sum/size);

	return 0;
}
