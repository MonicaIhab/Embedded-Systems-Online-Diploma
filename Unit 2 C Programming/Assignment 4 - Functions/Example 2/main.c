#include<stdio.h>
int Factorial(int n)
{
    if (n>=1)
        return n*Factorial(n-1);
    else
        return 1;
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    fflush(stdout);
    scanf("%d",&number);

    printf("Factorial of %d = %d", number, Factorial(number));
    return 0;
}

