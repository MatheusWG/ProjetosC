#include <stdio.h>
int main()
{
	int i, A[10], MA = -9999, ME = 9999, iMA=0, iME=0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]);
		if(A[i] > MA)
		{
			MA = A[i];
		}
		if(A[i] < ME)
		{
			ME = A[i];
		}
		for(i = 0; i < 10;i++)
		{
			if(A[i] > A[iMA])
				iMA = i;
			if(A[i] < A[iME])
				iME = i;
		}
	}
	printf("Menor A[%d] = %d\n", A[iME],iME );
	printf("Maior A[%d] = %d\n", A[iMA],iMA );
}
