#include <stdio.h>
#include <stdlib.h>

int main()
{
  int OP,COD,CODMA = 0;
  char NOME[50];
  while(1)
  {
  	system("cls");
  	printf("1 - Entrada manual do codigo.\n");
  	printf("2 - Entrada codigo automatico.\n");
  	printf("Entre com a opcao: ");
  	scanf("%d",&OP);
  	fflush(stdin);
  	if(OP == 1)
    {
	  printf("Entre com o codigo: ");
	  scanf("%d",&COD);
	  fflush(stdin);  	
    }
    else
 	  COD = CODMA + 1;
    printf("Entre com o nome: ");
    gets(NOME);
    if(COD > CODMA)
 	  CODMA = COD;
    printf("CODIGO....................: %d.\n",COD);
    printf("CLIENTE...................: %s.\n",NOME);
    system("pause");
    if(COD==-1)
    	break;
  }
  return 0;
}