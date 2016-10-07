#include <stdio.h>
#include <stdlib.h>

int main()
{
  int OP;
  
  while(1)
  {
    system("cls");
	printf("1 - SAUDACAO.\n");
    printf("2 - BRONCA.\n");
    printf("3 - FELICITACAO.\n");
    printf("0 - FIM.\n");
    printf("Entre com a opcao: ");
    scanf("%d",&OP);
    if(OP == 0)
	{
	  printf("Fim de servico...\n");
	  break;	
	}
	else if(OP == 1)
    {
	  printf("Ola. Como vai?\n");
	}	
	else if(OP == 2)
      printf("Vamos estudar.\n");
	else if(OP == 3)
	  printf("Meus Parabens !\n");
    else
  	  printf("Opcao inexistente.\n");
    system("pause");
  }	
  return 0;
}
