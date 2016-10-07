#include <stdio.h>

int main(int argc, char** argv)
{
int A=0,i,N;
for(i=0;i<6;i++)
{
scanf("%d",&N);
if(N>=0)
	A++	;
}
printf("%d\n",A);
	return 0;
}