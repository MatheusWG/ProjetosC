#include <stdio.h>

int main(int argc, char** argv)
{
	int IDADE;
	char NOME[10];
	printf("Escreva seu NOME: ");
	scanf("%s",NOME);
	printf("Escrava sua IDADE: ");
	scanf("%d",&IDADE);
	
	if(IDADE>=18)
	{
		printf("%s e maior de idade",NOME);
	}
	else
	{
		printf("%s e menor de idade",NOME);
	}
}
