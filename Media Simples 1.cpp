#include <stdio.h>

int main(int argc, char** argv)
{
	double MEDIA,A,B;
	scanf("%lf %lf",&A,&B);
	MEDIA = ((A*3.5+B*7.5)/(3.5+7.5));
	printf ("MEDIA = %.5lf\n",MEDIA);
}