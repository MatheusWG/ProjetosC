#include <stdio.h>
int main(int argc, char** argv)
{

	int M[100001];
	int R, N, PLACA, i;
	while(scanf("%d %d", &N, &R) != EOF)
	{
		if(N == R)
			printf("*\n");
		else
		{
			for(i = 1; i <= N; i++)
				M[i] = 1;
			for(i = 1; i <= R; i++)
			{
				scanf("%d", &PLACA);
				M[PLACA] = 0;
			}
			for(i = 1; i <= N; i++)
			{
				if(M[i] == 1)
					printf("%d", i);
			}
			printf("\n");
		}
	}
}

