//Fa�a um algoritmo para "Calcular o estoque m�dio de uma pe�a", sendo que: 
//ESTOQUEM�DIO = (QUANTIDADE M�NIMA + QUANTIDADE M�XIMA) /2
#include <stdio.h>

int main()
{
  float QTMI,QTMA,EST;
  printf("Entre com a quantidade minima: ");
  scanf("%f",&QTMI);
  printf("Entre com a quantidade maxima: ");
  scanf("%f",&QTMA);
  EST = (QTMI + QTMA)/2.0;
  printf("O estoque medio = %0.2f\n",EST);
}
  