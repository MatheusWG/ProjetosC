#include <stdio.h>
int main(int argc, char** argv)
{
	int i = 0, SENHA;
	
while(SENHA!=99&&i<3)
{
	printf("Entre com sua senha:");
	scanf("%d",&SENHA);
	i++;
}
if(SENHA==99)
	printf("Acesso Liberado.\n");
	
else
	printf("Senha Bloqueada.\n");
	
}