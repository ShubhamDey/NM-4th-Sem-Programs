#include<stdio.h>
#include<math.h>
#define E .00001
float f(float x)
{
	return(x*x*x-4*x-9);
}
float df(float x)
{
	return(3*x*x-4);
}
main()
{
	int i;
	float x;
	for(i=0;i<100;i++)
	{
		if (f(i)*f(i+1)<0)
		break;
	}
	float x0,x1=i+1;
	do
	{
		x0=x1-(f(x1)/df(x1));
		x1=x0;
		printf("\n %f",x0);
	}
	while(fabs(f(x0))>E);
	printf("\n te approx root is %f",x0);
}
