//Falta bloquear quando tem saldo negativo.

#include <stdio.h>
#include <windows.h>
int main(int argc, char** argv)
{
	float OP, SALDOM, SALDOP, VLR, OPC;


	system("cls");
	while(1)
	{
		system("cls");
		printf("1 - Depositar.\n");
		printf("2 - Retirar.\n");
		printf("3 - Verificar Saldo.\n");
		printf("4 - Transferir entre contas.\n");
		printf("0 - Fim.\n");
		scanf("%f", &OP);
		if(OP == 1)
		{
			printf("Em qual conta deseja depositar?\n");
			printf("1 - Mae.\n");
			printf("2 - Pai.\n");
			scanf("%f", &OPC);
			if(OPC == 1)
			{
				printf("Qual o valor que deseja depositar?\n");
				scanf("%f", &VLR);
				SALDOM += VLR;
			}
			if(OPC == 2)
			{
				printf("Qual o valor que deseja depositar?\n");
				scanf("%f", &VLR);
				SALDOP += VLR;
			}
		}
		if(OP == 2)
		{
			printf("De qual conta deseja retirar?\n");
			printf("1 - Mae.\n");
			printf("2 - Pai.\n");
			scanf("%f", &OPC);
			if(OPC == 1)
			{
				printf("Qual o valor que deseja retirar?\n");
				scanf("%f", &VLR);
				SALDOM -= VLR;
			}
			if(OPC == 2)
			{
				printf("Qual o valor que deseja retirar?\n");
				scanf("%f", &VLR);
				SALDOP -= VLR;
			}
		}
		if(OP == 3)
		{
			printf("De qual conta deseja ver o saldo?\n");
			printf("1 - Mae.\n");
			printf("2 - Pai.\n");
			scanf("%f", &OPC);
			if(OPC == 1)
				printf("Saldo da conta da Mae : R$ %.2f\n", SALDOM);
			if(OPC == 2)
				printf("Saldo na conta do Pai : R$ %.2f\n", SALDOP);
			system("pause");
		}
		if(OP == 4)
		{
			printf("Deseja transferir de que conta?\n");
			scanf("%f", &OPC);
			if(OPC == 1)
			{
				printf("Qual o valor que deseja retirar da conta da mae e depositar na conta do pai?\n");
				scanf("%f", &VLR);
				SALDOM -= VLR;
				SALDOP += VLR;
			}
			if(OPC == 2)
			{
				printf("Qual o valor que deseja retirar da conta do pai e depositar na conta da mae?\n");
				scanf("%f", &VLR);
				SALDOM += VLR;
				SALDOP -= VLR;
			}


		}
		if(OP == 0)
		{
			printf("FIM DA MOVIMENTACAO, OBRIGADO.\n");
			break;

		}
	}

}
