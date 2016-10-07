/*Imagine-se num quartel. Logo pela manhã foi dado o seguinte exercício. Você deverá dar 10 voltas no quarteirão

e a cada 2 voltas você deverá fazer 50 abdominais e 10 flexões. Toda volta devera ser informada uma mensagem, e

cada abdominal e flexão também, as mensagens devem seguir o modelo abaixo:

Volta número ......

....... abdominal

Flexão .......

a) Faça este algoritmo utilizando o comando para.

b) Faça este algoritmo utilizando o comando enquanto.*/



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