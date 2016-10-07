/*7. Sabendo que a biblioteca da universidade cobra 
uma multa diária pelo atraso de cada livro, faça um 
programa onde possa ser calculado o valor da multa. 
Sabe-se que será necessário solicitar ao usuário o 
número de livros em atraso, o número de dias em 
atraso e o valor diário da multa cobrada por cada 
livro. Com essas informações em mãos desenvolva o 
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