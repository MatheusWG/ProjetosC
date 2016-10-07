#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
int X;
printf("Informe o codigo do alimento: ");
scanf("%d",&X);
if(X==1)
	printf("Alimento nao perecivel\n");
else if(X==2||X==3||X==4)
	printf("Alimento perecivel\n");
else if(X==5||X==6)
	printf("Vestuário\n");
else if(X==7)
	printf("Higiene pessoal\n");
else if(X>=8&&X<=15)
	printf("Limpeza e utensilios domesticos\n");
else
	printf("Invalido\n");
}
	















	
