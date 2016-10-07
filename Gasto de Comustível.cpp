#include <stdio.h>

int main()
{
	int HORAS,VELOCIDADE;
	float GASTO;
	scanf("%d %d",&HORAS,&VELOCIDADE);
	GASTO=(HORAS*VELOCIDADE/12.0);
	printf("%.3f\n",GASTO);
	
}