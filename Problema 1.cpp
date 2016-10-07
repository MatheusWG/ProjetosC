#include <stdio.h>

int main(int argc, char** argv)
{
	int CRED1,CRED2,CRED3,CRED4;
	float CRED,TOTAL;
	
	printf("Escreva o total de materias de 1 credito: ");
	scanf("%d",&CRED1);
	printf("Escreva o total de materias de 2 creditos: ");
	scanf("%d",&CRED2);
	printf("Escreva o total de materias de 3 creditos: ");
	scanf("%d",&CRED3);
	printf("Escreva o total de materias de 4 creditos: ");
	scanf("%d",&CRED4);
	printf("Escreva o valor do credito: ");
	scanf("%f",&CRED);
	CRED1=CRED1*1;
	CRED2=CRED2*2;
	CRED3=CRED3*3;
	CRED4=CRED4*4;
	TOTAL=(CRED1+CRED2+CRED3+CRED4)*CRED;
	printf("A parcela total do aluno sera de: R$ %.2f\n",TOTAL);
	
	
}