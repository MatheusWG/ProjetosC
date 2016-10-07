#include <stdio.h>
#include <windows.h>

int main()
{
	float OP, QTD = 0, SUCO1, SUCO2, SUCO3, SUCO4, SUCO5, SUCO6, CONSUMO, CODMA = -99, K1 = 0, K2 = 0, K3 = 0, K4 = 0, K5 = 0, K6 = 0;
	printf("Consumo diario ideal:\n");
	scanf("%f", &CONSUMO);
	while(1)
	{
		system("cls");
		printf("1 - Abacaxi - 135 Kcal\n");
		printf("2 - Acerola - 46 Kcal\n");
		printf("3 - Cajú - 52 Kcal\n");
		printf("4 - Goiaba - 53 Kcal\n");
		printf("5 - Graviola - 127.5 Kcal\n");
		printf("6 - Laranja - 113 Kcal\n");
		printf("0 - FIM\n");
		printf("Entre com o codigo do suco:\n");
		scanf("%f", &OP);

		if(OP == 1)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO1);
			QTD += 135 * SUCO1;
			K1 = 135 * SUCO1;
			if(K1 >= CODMA)
				CODMA = 1;
		}
		if(OP == 2)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO2);
			QTD += 46 * SUCO2;
			K2 = 46 * SUCO2;
			if(K2 >= CODMA)
				CODMA = 2;
		}
		if(OP == 3)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO3);
			QTD += 52 * SUCO3;
			K3 = 52 * SUCO3;
			if(K3 >= CODMA)
				CODMA = 3;
		}
		if(OP == 4)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO4);
			QTD += 53 * SUCO4;
			K4 = 53 * SUCO4;
			if(K4 >= CODMA)
				CODMA = 4;
		}
		if(OP == 5)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO5);
			QTD += 127.5 * SUCO5;
			K5 = 127.5 * SUCO5;
			if(K5 >= CODMA)
				CODMA = 5;
		}
		if(OP == 6)
		{
			printf("Quantos copos desse suco voce tomou?\n");
			scanf("%f", &SUCO6);
			QTD += 113 * SUCO6;
			K6 = 113 * SUCO6;
			if(K6 >= CODMA)
				CODMA = 6;
		}
		if(OP == 0)
		{
			printf("%.2f Kcal\n", QTD);
			printf("O suco mais consumido foi o de codigo %.0f\n", CODMA);
			break;
		}

	}
	if(QTD > CONSUMO)
		printf("CONSUMO ACIMA DO IDEAL\n");
	else
		printf("VOCE ESTA DE PARABENS\n");
}



