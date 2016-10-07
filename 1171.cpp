#include <stdio.h>

int main()
{
	int n, i, j, sai = 1, aux, cont = 0;

	scanf("%d", &n);

	int x[n];

	i = 0;
	while(i < n)
		scanf("%d", &x[i]);
	{
		i++;
	}

	while(sai == 1)
	{
		sai = 0;

		i = 0;
		while(i < n - 1)
		{
			if(x[i] > x[i + 1])
			{
				sai = 1;

				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
			}
			i++;
		}
	}

	i = 0;
	while(i < n)
	{
		j = 0;
		while(j < n)
		{
			if(x[i] == x[j])
			{
				cont++;
			}
			j++;
		}

		if(x[i] != x[i + 1])
			printf("%d aparece %d vez(es)\n", x[i], cont);
		cont = 0;
		i++;
	}

	return(0);
}
