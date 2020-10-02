#include<stdio.h>
int main()
{
	int N = 0, M = 0;
	scanf_s("%d%d", &N, &M);
	int A[150][150];


	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	printf("\n");

	for (int i = M - 1;i >= 0;i--)
	{
		for (int j = 0;j <= M;j++)
		{
			printf("%d ", A[j][i]);
		}
		printf("\n");
	}




	return 0;
}