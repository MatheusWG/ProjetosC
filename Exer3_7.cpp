/*7. Sabendo que a biblioteca da universidade cobra 
uma multa di�ria pelo atraso de cada livro, fa�a um 
programa onde possa ser calculado o valor da multa. 
Sabe-se que ser� necess�rio solicitar ao usu�rio o 
n�mero de livros em atraso, o n�mero de dias em 
atraso e o valor di�rio da multa cobrada por cada 
livro. Com essas informa��es em m�os desenvolva o 
algoritmo e mostre o valor da multa a ser paga 
pelo aluno.*/

#include <stdio.h>

int main()
{
  float QT,DIAS,MULTA,TOTAL;
  printf("Entre com a quantidade de livros: ");
  scanf("%f",&QT);  
  printf("Entre os dias de atraso: ");
  scanf("%f",&DIAS);
  printf("Entre com o valor da multa: ");
  scanf("%f",&MULTA);
  TOTAL = QT * DIAS * MULTA;
  printf("O valor total da multa do aluno = %0.2f.\n",TOTAL);    
}  