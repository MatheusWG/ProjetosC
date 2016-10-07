#include <stdio.h>

int main()
{
  int N,A,S;
  printf("Entre com um numero: ");
  scanf("%d",&N);
  A = N - 1;
  S = N + 1;
  printf("O sucessor de %d = %d.\n",N,S);	
  printf("O antecessor de %d = %d.\n",N,A);
}