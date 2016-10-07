#include <stdio.h>
int main(int argc, char** argv)
{
	int SENHA;
	while(SENHA != 2002)
	{
		scanf("%d", &SENHA);
		if(SENHA == 2002)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	return 0;
}
