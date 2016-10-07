#include <stdio.h>
int main()
{
	int X[6], Y[6], i, ERRO;
	for(i = 1; i <= 5; i++)
		scanf("%d", &X[i]);
	for(i = 1; i <= 5; i++)
		scanf("%d", &Y[i]);
	ERRO = 0;
	for(i = 1; i <= 5; i++)
	{
		if(X[i] == Y[i])
		{
			ERRO = 1;
			break;
		}
	}
	if(ERRO == 1)
		printf("N\n");
	else
		printf("Y\n");
}
