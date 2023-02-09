#include<stdio.h>
#include<string.h>

int main()

{
	char string[100];
	int length, i;

	printf("Enter the string: ");
	fflush(stdout);
	gets(string);

	length = strlen(string);
	printf("Reverse string is: ");

	for(i = length - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	return 0;

}
