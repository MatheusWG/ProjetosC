/*Imagine-se num quartel. Logo pela manh� foi dado o seguinte exerc�cio. Voc� dever� dar 10 voltas no quarteir�o

e a cada 2 voltas voc� dever� fazer 50 abdominais e 10 flex�es. Toda volta devera ser informada uma mensagem, e

cada abdominal e flex�o tamb�m, as mensagens devem seguir o modelo abaixo:

Volta n�mero ......

....... abdominal

Flex�o .......

a) Fa�a este algoritmo utilizando o comando para.

b) Fa�a este algoritmo utilizando o comando enquanto.*/



#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int VOLTA,ABDOMINAL,FLEXAO;
	
	for(VOLTA=1;VOLTA<=10;VOLTA++)
	{
		system("cls");
		printf("Volta %d:\n",VOLTA);
		if(VOLTA%2==0)
		{
			for(ABDOMINAL=1;ABDOMINAL<=50;ABDOMINAL++)
				printf("%d Abdomiinal(is)\n",ABDOMINAL);
			
			
			
			
			for(FLEXAO=1;FLEXAO<=10;FLEXAO++)
				printf("%d Flexao(oes)\n",FLEXAO);
			
			system("pause");
			
			
		}
		
	}
	return 0;
}