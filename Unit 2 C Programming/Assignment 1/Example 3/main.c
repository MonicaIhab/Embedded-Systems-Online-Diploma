#include <stdio.h>

int main() {

	int a =0, b=0;
	printf("Enter two integers: \n");
	fflush(stdout);

	scanf("%d %d",&a,&b);
	printf("Sum = %d",a+b);

	return 0;
}
