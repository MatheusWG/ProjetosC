#include <stdio.h>

int main()
{
  double ALT,BASE,AREA;
  printf("Entre com a altura do triangulo: ");
  scanf("%lf",&ALT);
  printf("Entre com a base do triangulo: ");
  scanf("%lf",&BASE);
  AREA = (BASE * ALT)/2.0;
  printf("A area do triangulo com base = %.2lf e altura = %.2lf = %.2lf\n",BASE,ALT,AREA);
}  