#include <stdio.h>

int main ()
{
  float valor;
  int resto, resto1, resto2, total;
	
  printf("informe um valor:\n");
  scanf("%f", &valor);
	
  resto=valor/50;
  resto1=(valor-(resto*50))/10;
  resto2=valor-(resto*50);
  total=(resto2-(resto1*10))/1;
	
  printf("Voce precisa de %d notas de 50, %d notas de 10 e %d notas de 1", resto, resto1,total);
}