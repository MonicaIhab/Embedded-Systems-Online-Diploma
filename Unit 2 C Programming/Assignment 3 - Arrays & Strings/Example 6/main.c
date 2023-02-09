#include <stdio.h>
#include <string.h>
int main()
{
	char string[100];
	char key;
	int c = 0, count = 0;

	printf("Enter a string: ");
	fflush(stdout);
	gets(string);

	printf("Enter a character to find its frequency: ");
	fflush(stdout);
	key = getchar();

	while (string[c] != '\0') {

		if (string[c] == key) {
			count ++ ;
		}

		c++;
	}

	printf("Frequency of %c = %d", key, count);

	return 0;
}
