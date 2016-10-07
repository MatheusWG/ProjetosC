/*8. Ao realizar uma compra de um calçado novo 
você optou em pagar à vista, portanto ganhou 
um desconto de 10% sobre o custo total da compra. 
Monte um algoritmo onde deve ser calculado e 
exibido o valor pago pelo seu novo calçado.*/
#include <stdio.h>

int main()
{
  float VALOR,TOTAL;
  printf("Entre com a o valor do calcado: ");
  scanf("%f",&VALOR);
  TOTAL = VALOR - (VALOR * 0.10);
  printf("O valor total do calcado com 10%% = %0.2f.\n",TOTAL);
}  