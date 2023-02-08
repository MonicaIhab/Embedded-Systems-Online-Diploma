#include<stdio.h>

int main() {
	int i, j, rows, columns;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%d %d", &rows, &columns);
	int matrix[rows][columns],matrixtranspose[columns][rows];

	for (i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%d", &matrix[i][j]);
			fflush(stdin);
		}
	}

	for (i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				matrixtranspose[j][i]=matrix[i][j];
			}
		}

	printf("Entered Matrix: \n");
	for (i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				printf("%d \t", matrix[i][j]);
			}
			printf("\n");
		}

	printf("Transpose of Matrix: \n");
	for (i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d \t", matrixtranspose[i][j]);
		}
		printf("\n");
	}

	return 0;
}
