#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
char NOME[15]
double FIXO,VENDAS;
scanf("%s%lf%lf",NOME,&FIXO,&VENDAS);
printf("TOTAL = R$ %.2lf\n",(FIXO)+(VENDAS*0.15));
}