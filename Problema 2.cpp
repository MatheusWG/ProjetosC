#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	double SALARIO,FIXO,VLRGOL,GOLS,APVTO;
	
	printf("Escreva o salario fixo do jogador: ");
	scanf("%lf",&FIXO);
	printf("Escreva o valor de cada gol marcado pelo jogador: ");
	scanf("%lf",&VLRGOL);
	printf("Escreva a quantidade de gols marcados pelo jogador: ");
	scanf("%lf",&GOLS);
	printf("Escreva o percentual de aproveitamento em campo do jogador: ");
	scanf("%lf",&APVTO);
	APVTO=APVTO/100;
	SALARIO=FIXO+(VLRGOL*GOLS);
	SALARIO=SALARIO+(SALARIO*APVTO);
	printf("O salario do jogador Alejandro Martinuccio sera de: R$ %.2lf\n",SALARIO);
}