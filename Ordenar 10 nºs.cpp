#include <stdio.h>

int main()
{
	int i, j, A[10], aux;
	for(i = 0; i < 10; i++)
	{
		printf("Entre com A[%d]:\n", i);
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 10; i++)
		for(j = i; j < 10; j++)
		{
			if(A[i] > A[j])
			{
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
		for(i = 0; i < 10; i++)
		{
			printf("A[%d]=%d\n", i, A[i]);
		}
	

}
