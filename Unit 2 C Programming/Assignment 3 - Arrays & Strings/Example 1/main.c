#include<stdio.h>

int main() {
	float matrix1[2][2],matrix2[2][2], matrixsum[2][2];
	int i, j;

	printf("Enter the elements of 1st matrix\n");
	fflush(stdout);

	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &matrix1[i][j]);
			fflush(stdin);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	fflush(stdout);

	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &matrix2[i][j]);
			fflush(stdin);

		}
	}

	for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				matrixsum[i][j]=matrix1[i][j]+matrix2[i][j];
			}
		}

	printf("Sum of matrices: \n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f \t", matrixsum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
