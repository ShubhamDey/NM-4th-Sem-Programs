#include<stdio.h>
#include<math.h>
#define E .00001
float f(float x)
{
	return(x*x*x-4*x-9);
}
main()
{
	int i;
	float x;
	for (i=0;i<100;i++)
	{
		if(f(i)*f(i+1)<0)
		break;
	}
	float x0=i,x1=i+1;
	do
	{
		x=(x0+x1)/2.0;
		printf("\nX= %f",x);
		if(f(x)*f(x1)<0)
			x0=x;
		else
			x1=x;
	}
	while(fabs(f(x))>E);
	printf("\n the approx root is %f",x);
}	
