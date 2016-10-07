#include <stdio.h>

int main(int argc, char** argv)
{
	float R,C,A,V;
printf("Informe o raio.\n");
	scanf("%f",&R);
	
	C=2*3.14159*R;
	A=3.14159*R*R;
	V=0.75*3.14159*R*R*R;
	printf("C = %.3f\n",C);
	printf("A = %.3f\n",A);
	printf("V = %.3f\n",V);
}
