#include <stdio.h>

int main(int argc, char** argv)
{
	int A, B;
	scanf("%d %d", &A, &B);
	if(A >= 1 && A <= 13, B >= 1 && B <= 13)
	{
		if(A >= B)
			printf("%d\n", A);
		else if(A < B)
			printf("%d\n", B);
	}
}
