#include <stdio.h>
int main(int argc, char** argv)
{
	int CODOP, PECAS = 0, PECASF, NF = 0;
	float SM, FOLHA = 0;
	printf("Entre com o valor do salario minimo:\n");
	scanf("%f", &SM);
	while(1)
	{
		printf("Informe o numero do operario:\n");
		scanf("%d", &CODOP);
		if(CODOP == 0)
			break;
		printf("Informe o numero de pecas produzidas pelo operario:\n")
		scanf("%d", &PECASF);
		if(PECASF < 20)
			FOLHA = FOLHA + SM;
		if(PECASF > 20 && PECASF <= 31)
			FOLHA = FOLHA + (SM + SM * 0.05);
		if(PECASF > 31)
			FOLHA = FOLHA + (SM + SM * 0.10);
		PECAS += PECASF;
		NF++;
		
	}
	printf("NUMERO DE FUNCIONARIOS:%d\n", NF);
	printf("TOTAL DA FOLHA DE PAGAMENTO: R$ %.2f\n", FOLHA);
	printf("TOTAL DE PECAS PRODUZIDAS: %d", PECAS);
}
