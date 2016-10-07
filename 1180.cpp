#include <stdio.h>
int main()
{
	int N, ME = 0, i;
	scanf("%d", &N);
	int X[N];

	for(i = 0; i < N; i++)
	{
		scanf("%d", &X[i]);

	}
	for(i = 1; i < N; i++)
	{
		if(X[i] < X[ME])
			ME = i;
	}

	printf("Menor valor: %d\n", X[ME]);
	printf("Posicao: %d", ME);
}
