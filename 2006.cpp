#include <stdio.h>
int main(int argc, char** argv)
{
	int T, OP, i, N = 0;

	{
		scanf("%d\n", &T);
		for(i = 0; i <= 4; i++)
		{
			scanf("%d", &OP);
			if(OP == T)
				N++;
		}
		printf("%d", N);
	}
}
