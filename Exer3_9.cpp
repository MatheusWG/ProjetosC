/*9. Uma empresa est� com dificuldades para calcular 
o pagamento de seus consultores, atualmente � tudo 
calculado numa planilha, voc� como programador 
novato na empresa percebeu que poderia fazer 
um programa para ajudar neste calculo. 
Os consultores como � de costume cobram deslocamento 
por Km rodado. Com a dist�ncia (km) e o valor por Km, 
calcule o custo de uma viagem, lembre-se que todo 
o custo acrescenta 5% como previs�o de manuten��o:
A sa�da do seu programa deve conter os Km Rodado, 
o valor por Km e o custo, veja exemplo abaixo:
Km rodado	Valor do Km	   Custo
100	        0,50	       ?? + 5%*/

#include <stdio.h>

int main()
{
  float DIST,VLR,CUSTO;
  printf("Entre com a distancia percorrida: ");
  scanf("%f",&DIST);
  printf("Entre com o valor do KM: ");
  scanf("%f",&VLR);
  CUSTO = DIST * VLR;
  CUSTO = CUSTO + (CUSTO * 0.05);
  //Cabecalho
  printf("%-15s %-15s %-15s\n\n","Km Rodado","Valor do Km","Custo+5%");
  //Dados
  printf("%-15.2f %-15.2f %-15.2f\n",DIST,VLR,CUSTO);
}  
  
  
  
