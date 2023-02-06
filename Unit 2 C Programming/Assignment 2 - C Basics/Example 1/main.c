#include<stdio.h>

int main() {
  int number;
  printf("Enter and integer you want to check: ");
  fflush(stdout);
  scanf("%d", &number);

  if (number % 2 != 0)
	  printf("%d is an odd number.", number);
  else
	  printf("%d is an even number.", number);

   return 0;
}
