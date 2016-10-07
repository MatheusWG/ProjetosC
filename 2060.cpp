#include <stdio.h>
int main()
{
	int N, i,M2=0,M3=0,M4=0,M5=0;
	scanf("%d", &N);
	int X;
	for(i = 0; i < N; i++)
	{
		scanf("%d", &X);
		if(X % 2 == 0)
			M2++;
		if(X % 3 == 0)
			M3++;
		if(X % 4 == 0)
			M4++;
		if(X % 5 == 0)
			M5++;			
	}
	printf("%d Multiplo(s) de 2\n",M2);
	printf("%d Multiplo(s) de 3\n",M3);
	printf("%d Multiplo(s) de 4\n",M4);
	printf("%d Multiplo(s) de 5\n",M5);
}
