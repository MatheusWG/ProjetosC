#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float X,A,B,C,X1,X2;
	
	printf("Digite um numero para AX2:   ");
	scanf("%f",&A);
	
	printf("Digite um numero para BX:   ");
	scanf("%f",&B);
	
	printf("Digite um numero para C:   ");
	scanf("%f",&C);
	
	X=B*B - 4*A*C;
	X1=(-B + sqrt(X))/(2*A);
	X2=(-B - sqrt(X))/(2*A);
	
	printf("X1 = %1.f\nX2 = %1.f",X1,X2);	
}