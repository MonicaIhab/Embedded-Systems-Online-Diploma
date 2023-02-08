#include<stdio.h>
int main()
{
	int size, i, key;
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d", &size);

	int arr[size];

	for (i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
		fflush(stdin);
	}

	printf("Enter element to be searched: ");
	fflush(stdout);
	scanf("%d", &key);

	for(i=0; i<size; i++)
	{
		if(arr[i]==key)
		{
			printf("Number found at location = %d" ,i+1);
			return 0;
		}
	}

	return 0;
}
