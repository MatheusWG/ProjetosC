#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int N[70][70]; 
	int M, i, j, DS;

	while (scanf("%d", &M) != EOF)
	{

		if(M < 3 || M >= 70)
		{
			return (0);
		}
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < M; j++)
			{
				DS = M - j - 1;
				if (i == j)
				{
					N[i][j] = 1;
				}
				if (i == DS)
				{
					N[i][j] = 2;
				}
				if (i == DS && i == j)
				{
					N[i][j] = 2;
				}
				if(i != DS && i != j)
				{
					N[i][j] = 3;
				}
			}
		}

		for (i = 0; i < M; i++)
		{
			for (j = 0; j < M; j++)
			{
				printf("%d", N[i][j]);
			}
			printf ("\n");
		}
	}
}
