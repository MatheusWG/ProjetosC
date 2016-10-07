#include <stdio.h>
int main(int argc, char** argv)
{
	int NUMERO;
	printf("Escreva um numero: ");
	scanf("%d",&NUMERO);
	if(NUMERO%5==0)
	{
		printf("o numero %d e divisivel por 5",NUMERO);
	}
else
{
	printf("o numero %d nao e divisivel por 5",NUMERO);
}

}