#include <stdio.h>
int main()
{
    int Ci[10001],Vi[1001],N,SOMA=0,i;
    while(1)
    {
     SOMA=0;
    scanf("%d",&N);
    if (N==0)
    {
        break;
    }
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&Ci[i],&Vi[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (Vi[i]%2==0)
        {
            SOMA+=Vi[i];
        }
        else
        {
            SOMA=SOMA + Vi[i]-1;
        }
        
    }
    printf("%d\n",SOMA = SOMA/4 );
    }
}