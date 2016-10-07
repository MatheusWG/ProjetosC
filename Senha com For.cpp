#include <stdio.h>
int main(int argc, char** argv)
{
	int i=0,SENHA;
	for(i=1;i<=3;i++)
	{
	scanf("%d",&SENHA);
	if(SENHA==99)
		i=3;
}
if(SENHA==99)
	printf("Acesso Liberado.\n");
else
	printf("Senha Bloqueada.\n");
	return 0;
}

