#include <stdio.h>

int main(int argc, char** argv)
{
	int OP;
	float SALDO = 0,VLR=0;
				  while(1)
	{
		system("cls");
		printf("1-DEPOSITAR\n2-RETIRAR\n3-VERIFICAR SALDO\n0-FIM\n");
		scanf("%d", &OP);
		if(OP == 1)
		{
			printf("Escolha o valor que quer depositar:\n");
			scanf("%f", &VLR);
			SALDO += VLR;
		}
		else if(OP == 2)
		{
			printf("Escolha o valor que quer retirar:\n");
			scanf("%f", &VLR);
			SALDO -= VLR;
		}
		else if(OP == 3)
		{
			printf("R$ %.2f\n", SALDO);
		}
		else
		{
			printf("FIM DA MOVIMENTACAO, OBRIGADO");
			break;
		}
		system("pause");
	}


}
