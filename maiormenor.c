#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b;
	int maior, menor;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
	{
		maior = a;
		menor = b;
	}
	else if(b > a)
	{
		menor = a;
		maior = b;
	}
	printf("%d\n", menor );
	printf("%d\n", maior );
}
