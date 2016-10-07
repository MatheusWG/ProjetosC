#include <stdio.h>
int main(int argc, char** argv)
{
	int ST;
	while(1)
	{
		scanf("%d", &ST);
		if(ST == 1)
			printf("TOP 1\n");
		if(ST > 1 && ST < 4)
			printf("TOP 3\n");
		if(ST > 3 && ST < 6)
			printf("TOP 5\n");
		if(ST > 5 && ST < 11)
			printf("TOP 10\n");
		if(ST > 10 && ST < 26)
			printf("TOP 25\n");
		if(ST > 25 && ST < 51)
			printf("TOP 50\n");
		if(ST > 50 && ST < 101)
			printf("TOP 100\n");
		if(ST == 0)
			break;
	}

}
