#include <stdio.h>

int main(int argc, char** argv)
{
	int A,B,C;
	printf("Informe a jogada de Alice:\n");
	scanf("%d",&A);
	printf("Informe a jogada de Beto:\n");
	scanf("%d",&B);
	printf("Informe a jogada de Clara:\n");
	scanf("%d",&C);
	if(A!=B&&A!=C&&C==B)
		printf("Alice ganhou.");
	else if(A==B&&A==C&&C==B)
		printf("Ninguem ganhou.");
	else if(A==B&&B!=C)
		printf("Clara ganhou.");
	else
	printf("Beto ganhou");
}