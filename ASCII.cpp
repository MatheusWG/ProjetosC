#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0;
    printf("IMPRIMINDO TABELA ASCII\n");
    for(a=1;a<255;a++)
    printf("Decimal: %i   Octal: %o   Hexadecimal: %x   Caractere: %c \n",a,a,a,a);
    printf("\n\t\tFIM\n\n");
system("pause");
}