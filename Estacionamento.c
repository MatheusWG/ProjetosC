#include <stdio.h>
#include <stdlib.h>
int main()
{
	int V[10], i, OP, L, O, OP2;
	for (i = 0; i < 10; i++)
		V[i] = 0;
	while(1)
		{
			L = 0;
			O = 0;
			system("cls");
			printf("1 - Mostrar Todas as Vagas\n");
			printf("2 - Mostrar Vagas Livres\n");
			printf("3 - Estacionar Carro\n");
			printf("4 - Remover Carro\n");
			printf("5 - Resumo do Estacionamento\n");
			printf("0 - Sair\n");
			scanf("%d", &OP);
			if (OP == 0)
				return 0;
			else if (OP == 1)
				{
					for (i = 0; i < 10; i++)
						{
							if (V[i] == 0)
								printf("Vaga %d = Livre\n", i);
							else if (V[i] == 1)
								printf("Vaga %d = Ocupada\n", i);
						}
				}
			else if (OP == 2)
				{
					printf("Vagas Livres:\n");
					for (i = 0; i < 10; i++)
						{
							if (V[i] == 0)
								printf("Vaga %d\n", i);
						}
				}
			else if (OP == 3)
				{
					for (i = 0; i < 10; i++)
						{
							if (V[i] == 0)
								printf("Vaga %d\n", i);
						}
					scanf("%d", &OP2);
					if (V[OP2] == 1)
						{
							printf("A vaga %d ja esta ocupada\n", OP2 );
						}
					else if (V[OP2] == 0)
						{
							V[OP2] = 1;
							printf("Voce ocupou a vaga %d\n", OP2);
						}
				}
			else if (OP == 4)
				{
					printf("  Se sua vaga nao aparecer aqui significa que alguem retirou seu carro\n\n");
					for (i = 0; i < 10; i++)
						{
							if (V[i] == 1)
								printf("Vaga %d\n", i);
						}
					scanf("%d", &OP2);
					if (V[OP2] == 0)
						{
							printf("A vaga %d ja esta livre\n", OP2);
						}
					else if (V[OP2] == 1)
						{
							printf("Voce desocupou a vaga %d\n", OP2);
							V[OP2] = 0;
						}
				}
			else if (OP == 5)
				{
					for (i = 0; i < 10; i++)
						{
							if (V[i] == 0)
								L++;
							if (V[i] == 1)
								O++;
						}
					printf("%d Vaga(s) Livre(s)\n%d Vaga(s) Ocupada(s)\n", L, O);
				}
			system("pause");
		}
}
