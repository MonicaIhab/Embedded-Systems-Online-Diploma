#include <stdio.h>

int power(int base, int powernum)
{
    if (powernum != 0)
        return (base * power(base, powernum - 1));
    else
        return 1;
}
int main()
{
    int base, powernum, result;

    printf("Enter base number: ");
    fflush(stdout);
    scanf("%d", &base);

    printf("Enter power number(positive integer): ");
    fflush(stdout);
    scanf("%d", &powernum);

    result = power(base, powernum);
    printf("%d^%d = %d", base, powernum, result);

    return 0;
}

