/*3. Fazer um programa que imprima a m�dia aritm�tica 
dos n�meros 8, 9 e 7. A media dos n�meros 4, 5 e 6. 
A soma das duas m�dias. A m�dia desta soma.*/

#include <stdio.h>

int main()
{
  double MED1,MED2,SOMA,MEDF;
  MED1 = (8.0 + 9.0 + 7.0)/3.0;
  MED2 = (4.0 + 5.0 + 6.0)/3.0;
  SOMA = MED1 + MED2;
  MEDF = SOMA/2.0;
  printf("A media de 8,9 e 7 = %.2lf.\n",MED1);
  printf("A media de 4,5 e 6 = %.2lf.\n",MED2);
  printf("A soma das medias = %.2lf.\n",SOMA);
  printf("A media da soma = %.2lf.\n",MEDF);
}