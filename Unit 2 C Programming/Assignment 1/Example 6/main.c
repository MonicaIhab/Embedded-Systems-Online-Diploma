#include<stdio.h>
int main() {
  float a, b,temp;
  printf("Enter value of a: ");
  fflush(stdout);
  scanf("%f", &a);
  printf("Enter value of b: ");
  fflush(stdout);
  scanf("%f", &b);

  temp = a;
  a = b;
  b = temp;

  printf("After Swapping, value of a = %.2f\n", a);
  printf("After Swapping, value of b = %.2f", b);
  return 0;
}
