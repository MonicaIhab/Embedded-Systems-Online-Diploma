#include <stdio.h>
int main()
{
    char string[100];
    int i,length=0;

    printf("Enter a string: ");
	fflush(stdout);
	gets(string);

    for(i=0; string[i]!='\0'; i++)
    {
        length++;
    }

    printf("Length of string: %d",length);

     return 0;
}
