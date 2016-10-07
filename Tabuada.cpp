#include <stdio.h>
int main(int argc, char** argv)
{
	int i, X;
	for(i = 1; i <= 10; i++)
	{
		for(X = 0; X <= 10; X++)
		{
			printf("%d *  %d = %d\n", i, X, i * X);
			printf("\n");
		}
		
	}
}
