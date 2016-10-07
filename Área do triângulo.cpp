#include <stdio.h>

int main(int argc, char** argv)
{
	double Area,Base,Altura;
	printf("Base em cm:\n");
	scanf("%lf",&Base);
	printf("Altura em cm:\n");
	scanf("%lf",&Altura);
	Area=(Base*Altura)/2.0;
	printf("A area do triangulo eh %.2lf cm^2",Area);
	
}