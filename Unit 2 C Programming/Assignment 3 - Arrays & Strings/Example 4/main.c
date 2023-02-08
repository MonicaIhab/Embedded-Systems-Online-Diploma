#include<stdio.h>
int main()
{
	int size, i, new, position;
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d", &size);

	int arr[size];

	for (i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
		fflush(stdin);
	}

	printf("Enter element to be inserted: ");
	fflush(stdout);
	scanf("%d", &new);

	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d", &position);

    size++;

    for (i = size - 1; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = new;

    for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

    return 0;
}
