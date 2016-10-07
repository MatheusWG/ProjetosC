#include <stdio.h>

int main(int argc, char** argv)
{
	float n1,n2,soma,subt,div,mult;
	
	printf ("Escreva um numero real:   ");
	
	scanf("%f",&n1);

	printf("Escreva um numero real:\n   ");
	
	scanf("%f",&n2);
	
	soma=n1+n2;
	subt=n1-n2;
	div=n1/n2;
	mult=n1*n2;
	
	
	
	
	
	printf("Soma =        %8.2f  +  %4.2f=%8.2f\n",n1,n2,soma);
	
	printf("Subt =        %8.2f  -  %4.2f=%8.2f\n",n1,n2,subt);
	
	printf("Mult =        %8.2f  *  %4.2f=%8.2f\n",n1,n2,mult);
	
	printf("Div  =        %8.2f  /  %4.2f=%8.2f\n",n1,n2,div);
	
}