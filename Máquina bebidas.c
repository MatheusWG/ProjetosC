#include <stdio.h>
#include <stdlib.h>
int main()
{
	int P[7], OP, i;
	float R[7], D, RE = 0, T = 0;

	P [0] = 0;
	for (i = 1; i <= 6; i++)
	{
		system("cls");
		printf("Abastecendo maquina!!\n");
		printf("Quantidade de produtos na prateleira %d = ", i);
		scanf("%d", &P[i]);
		printf("Preco do produto = ");
		scanf("%f", &R[i]);

	}

	while(1)
	{
		system("cls");
		printf("*** Selecione produto abaixo ***\n\n");
		for(i = 1; i <= 6; i++)
			printf("%d - Produto da prateleira %d = R$%.2f\nQuantidade restante: %d\n\n",i,i,R[i],P[i]);
		printf("0 - Sair\n");
		scanf("%d", &OP);

		if(OP == 0)
			break;

		if (P[OP] == 0)
			printf("Produto esgotado !!!\n\n");
		else
		{
			printf("O valor deste produto e R$ %.2f\n", R[OP]);
			printf("Deposite seu dinheiro : R$");
			scanf("%f", &D);

			while(D < R[OP])
			{
				RE = R[OP] - D;
				printf("\nFaltam R$ %.2f ! Deposite o restante : R$", RE);
				scanf("%f", &RE);
				D += RE;
			}

			if(D > R[OP])
			{
				T = D - R[OP];
				printf("\nR$ %.2f de troco\n", T);
				P[OP] -= 1;
			}
			if(D == R[OP])
			{
				P[OP] -= 1;
				printf("\n\nProduto adquirido com sucesso!!\n");
			}
		}
		system("pause");
		system("cls");
	}
}
