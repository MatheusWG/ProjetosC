#include <stdio.h>
int main()
{
	int i,j,x[4][4],L[4],C[4],P=0,S=0,M=0;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3 ; j++)
			scanf("%d",&x[i][j]);
		
		for (i = 1; i <= 3; i++)
		{
			L[i]=0;
			C[i]=0;
		}
		
		for (i = 1; i <= 3; i++)
			for (j = 1; j <= 3; j++)
			{
				L[i]+=x[i][j];
				C[j]+=x[i][j];
				if (i==j)
					P+=x[i][j];
				M+=x[i][j];
				if (j==4-i)
					S+=x[i][j];
			}
			
			for (i = 1; i <= 3; i++)
				printf("Linha %d = %d\n",i,L[i]);
			for (i = 1; i <= 3; i++)
				printf("Coluna %d = %d\n",i,C[i]);
			printf("Primaria = %d\n",P);
			printf("Secundaria = %d\n",S);
			printf("Total = %d\n",M);

			return 0;
		}