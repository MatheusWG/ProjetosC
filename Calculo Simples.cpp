#include <stdio.h>
int main(int argc, char** argv)
{
	int A,B,C,D;
	float E,F;
	scanf("%d%d%f",&A,&B,&E);
	scanf("%d%d%f",&C,&D,&F);
	printf("VALOR A PAGAR: R$ %.2f\n",(B*E)+(D*F));
}