#include <stdio.h>

int main ()
{
  int horaE,horaS,min;
  float total;
  printf("Entre com a hora de entrada do carro: ");
  scanf("%d:%d",&horaE,&min);
  printf("Entre com a hora de saida do carro: ");
  scanf("%d:%d",&horaS,&min);
  total = (horaS-horaE)*2.5;
  printf("O valor a ser pago = %0.2f.\n",total);
}
  