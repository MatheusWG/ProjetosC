#include <stdio.h>
int main(int argc, char** argv)
{
	int i=0,T=0,NUM;
		while(i<10)
	  {
		  scanf("%d",&NUM);
		  if(NUM%2==0)
		  T+=NUM; 
		  i++; 
		  
	  }  	
	  printf("%d\n",T);
	
	
	
	
	return 0;
}