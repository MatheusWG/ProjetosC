#include <stdio.h>

int main(int argc, char** argv)
{
	int X;
	
	float Y,CONSUMO;
	
	X=500;
	Y=35;
	
	CONSUMO=(X/Y);
	
	printf("%.3f km/l",CONSUMO);
}