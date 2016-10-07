#include <stdio.h>
int main(int argc, char** argv)
{
	int V[50], i, N;
	scanf("%d", &N);
	for(i = 0; i < 10; i++)
	{
		V[i] = N;
		printf("N[%d] = %d\n", i, V[i]);
		N=N*2;
	}

}
