#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, m[8][11], OP, F, P;
	for (i = 1; i <= 7; i++)
		for (j = 1; j <= 10; j++) {
			m[i][j] = 0;
		}
		while(1) {
			system("cls");
			printf("* = Poltrona Livre\n# = Poltrona Ocupada\n\n");
			printf("          *** PALCO ***\n\n");
			for (i = 1; i <= 7; i++) {

				printf("%d - ", i);
				for (j = 1; j <= 10; j++) {
					if (m[i][j] == 0) {
						printf(" * ");
					} else if (m[i][j] == 1) {
						printf(" # ");
					}
				}
				printf("\n\n");
			}
			printf("1 - Comprar Ingressos\n");
			printf("0 - Sair\n");
			scanf("%d", &OP);
			if (OP == 0) {
				return 0;
			} else if (OP == 1) {
				printf("Deseja comprar ingresso para qual fileira?\n*Quanto mais proximo do palco maior o valor do ingresso\n");
				scanf("%d", &F);
				for (j = 1; j <= 7; j++) {
					if (F == j) {
						printf("Deseja comprar ingresso para qual poltrona da fileira %d?\n", F);
						scanf("%d", &P);
						for (i = 1; i <= 10; i++) {
							if (P == i && m[j][i] == 0) {
								printf("Voce comprou ingresso para a poltrona %d da fileira %d\n", i, j);
								if (F == 1)
									printf("O valor total a pagar eh de R$ 100\n");
								if (F == 2)
									printf("O valor total a pagar eh de R$ 90\n");
								if (F == 3)
									printf("O valor total a pagar eh de R$ 80\n");
								if (F == 4)
									printf("O valor total a pagar eh de R$ 70\n");
								if (F == 5)
									printf("O valor total a pagar eh de R$ 60\n");
								if (F == 6)
									printf("O valor total a pagar eh de R$ 50\n");
								if (F == 7)
									printf("O valor total a pagar eh de R$ 40\n");
								m[j][i] = 1;
							} else if (P == i && m[j][i] == 1) {
								printf("Poltrona ja ocupada\n");
							}


						}
					}

				}
				system("pause");

			}

		}
	}
