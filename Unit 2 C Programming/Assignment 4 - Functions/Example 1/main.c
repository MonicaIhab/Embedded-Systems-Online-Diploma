#include <stdio.h>
int findprime(int low, int high)
{	int flag=0, i;
	while (low < high)
	{
		flag = 0;

		if (low <= 1)
		{
			++low;
			continue;
		}

		for (i = 2; i <= low-1; ++i)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			printf("%d ", low);

		++low;
	}
	return 0;
}

int main() {
	int low, high;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d", &low, &high);

	printf("Prime numbers between %d and %d are: ", low, high);
	findprime(low, high);

	return 0;
}
