#include <stdio.h>

int main()
{
	int P, i, tempo[1001], T, N1, N2;
	tempo[0] = 0;
	N1 = 0;
	N2 = 0;
	while(1)
	{
		T = 0;
		scanf("%d", &P);

		if (P == 0)
			break;

		for(i = 1; i <= P; i++)
		{
			scanf("%d", &tempo[i]);

			N1 = tempo[i - 1];
			N2 = tempo[i];

			if (i == 1)
				T = 10;
			else if((N2 - N1) < 10)
				T += (N2 - N1);
			else
				T += 10;
		}
		printf("%d\n", T);
	}
}
