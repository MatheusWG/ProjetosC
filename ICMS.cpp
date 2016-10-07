#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	float VALOR;
	char ESTADO[2];
	printf("Informe o estado de destino:");
	scanf("%s", ESTADO);
	printf("Digite o valor da mercadoria:");
	scanf("%f", &VALOR);
	if((strcmp(ESTADO, "PR") == 0) || (strcmp(ESTADO, "RS") == 0) || (strcmp(ESTADO, "SP") == 0) || (strcmp(ESTADO, "RJ") == 0) || (strcmp(ESTADO, "MG") == 0))
	{
		VALOR = VALOR + (VALOR * 0.07);
		if((strcmp(ESTADO, "PR") == 0))
		{

			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 7%% para SC no total de R$ %.2f\n", (VALOR - 70), ((VALOR - 70) * 0.07));
			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 5%% para PR no total de R$ %.2f\n", (VALOR - 70) + ((VALOR - 70) * 0.07) , (VALOR * 0.05));
			printf("Total geral da mercadoria com tributacao = R$ %.2f\n", (VALOR + (VALOR * 0.05)));
		}
		else if((strcmp(ESTADO, "RS") == 0))
		{

			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 7%% para SC no total de R$ %.2f\n", (VALOR - 70), ((VALOR - 70) * 0.07));
			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 0%% para RS no total de R$ %.2f\n", (VALOR - 70) + ((VALOR - 70) * 0.07), VALOR);
			printf("Total geral da mercadoria com tributacao = R$ %.2f\n", VALOR);
		}
		else if((strcmp(ESTADO, "SP") == 0))
		{

			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 7%% para SC no total de R$ %.2f\n", (VALOR - 70), ((VALOR - 70) * 0.07));
			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 11%% para SP no total de R$ %.2f\n", (VALOR - 70) + ((VALOR - 70) * 0.07) , (VALOR * 0.11));
			printf("Total geral da mercadoria com tributacao = R$ %.2f\n", (VALOR + (VALOR * 0.11)));
		}
		else if((strcmp(ESTADO, "RJ") == 0))
		{

			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 7%% para SC no total de R$ %.2f\n", (VALOR - 70), ((VALOR - 70) * 0.07));
			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 10%% para RJ no total de R$ %.2f\n", (VALOR - 70) + ((VALOR - 70) * 0.07) , (VALOR * 0.10));
			printf("Total geral da mercadoria com tributacao = R$ %.2f\n", (VALOR + (VALOR * 0.10)));
		}
		else if((strcmp(ESTADO, "MG") == 0))
		{

			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 7%% para SC no total de R$ %.2f\n", (VALOR - 70), ((VALOR - 70) * 0.07));
			printf("Valor de ICMS da mercadoria de R$ %.2f tera tributacao de 5%% para MG no total de R$ %.2f\n", (VALOR - 70) + ((VALOR - 70) * 0.07) , (VALOR * 0.05));
			printf("Total geral da mercadoria com tributacao = R$ %.2f\n", (VALOR + (VALOR * 0.05)));
		}
	}
	else
		printf("ESTADO NAO DISPONIVEL NA VERSAO DEMO.");

}
