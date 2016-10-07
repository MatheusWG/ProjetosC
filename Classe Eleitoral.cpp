#include <stdio.h>

int main(int argc, char** argv)
{
	int IDADE;
	printf("Escreva sua idade:");
	scanf("%d", &IDADE);
	if(IDADE < 16)
		printf("Nao eleitor.");
	else if(IDADE >= 18 && IDADE <= 65)
		printf("Eleitor obrigatorio.");
	else
		printf("Eleitor facultativo.");
}
