#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int  i, OP, a, b, c = 0, j = 0, D, y;
	printf("1 - Preencher o jogo automaticamente\n");
	printf("2 - Preencher o jogo manualmente\n");
	printf("0 - Sair\n");
	srand(time(NULL));
	scanf("%d", &OP);
	system("cls");

	if (OP == 0 || (OP != 1 && OP != 2))
		return 0;

	printf("Digite a quantia de pares do jogo da memoria.\n");
	scanf("%d", &D);
	system("cls");

	if (D == 0)
		return 0;

	int M[D * 2], N[D], x[D * 2];
	if (OP == 1)
		{
			for (i = 1; i <= D; i++)
				N[i] = (rand() % (D * 2)) + 1;

			for(i = 1; i <= D * 2; i++)
				{
					x[i] = (rand() % (D * 2)) + 1;

					for(y = 0; y < i; y++)
						if(x[y] == x[i])
							{
								x[i] = (rand() % (D * 2)) + 1;
								y = 0;
							}
				}

			for (i = 1; i <= D; i++)
				M[x[i]] = N[i];

			for (i = D + 1; i <= D * 2; i++)
				M[x[i]] = N[i - D];
		}

	else if (OP == 2)
		{
			for (i = 1; i <= D * 2; i++)
				{
					printf("Numero na casa %d\n", i);
					scanf("%d", &M[i]);
				}
		}

	while(c < D)
		{
			system("cls");
			printf("Digite os numeros das duas casas que deseja ver\n");

			for (i = 1; i <= D * 2; i++)
				{
					if (M[i] != 0)
						printf("%d  ", i);
				}

			printf("\n");
			scanf("%d %d", &a, &b);

			if (a <= (D * 2) && b <= (D * 2) && a != b)
				{
					printf("%d                   %d\n", M[a], M[b]);
					if (M[a] == M[b] && M[a] != 0 && M[b] != 0)
						{
							c++;
							printf("%d         =           %d\n\n", M[a], M[b]);
							M[a] = 0;
							M[b] = 0;
							printf("Voce acertou!!!\n");
						}

					else if (M[a] != M[b] && M[a] != 0 && M[b] != 0)
						{
							printf("%d         !=          %d\n\n", M[a], M[b]);
							printf("Combinacao Incorreta!! Tente Novamente!!\n");
						}
					else if(M[a] == 0 || M[b] == 0)
						{
							printf("%d         !=          %d\n\n", M[a], M[b]);
							printf("Voce ja eliminou uma dessas casas\n");
						}
					else if (M[a] == 0 && M[b] == 0)
						{
							printf("%d         =          %d\n\n", M[a], M[b]);
							printf("Voce ja acertou esse par\n");
						}
					else
						{
							printf("%d         !=          %d\n\n", M[a], M[b]);
							printf("Combinacao Incorreta!! Tente Novamente!!\n");
						}
				}
			else if (a == b)
				{
					printf("Nao pode selecionar a mesma casa!!!\n");
				}

			else
				{
					printf("Casa nao existente!! Tente Novamente!!\n");
				}

			j++;
			system("pause");
			system("cls");
		}

	printf("Parabens!!\n\nVoce concluiu o jogo com %d jogadas!!\n\n", j);
	return 0;
}
