#include<stdio.h>
float f(float x)
{
	return(1/(1+(x*x)));
}
main()
{
	int n,i;
	float s,x0,xn,h;
	printf("\nenter the num of intervals");
	scanf("%d",&n);
	printf("\nenter the initial position");
	scanf("%f",&x0);
	printf("\nenter the final position");
	scanf("%f",&xn);
	h=(float)(xn-x0)/n;
	s=f(x0)+f(xn);
	for(i=1;i<n;i++)
	{
		s+=(float)2*f(x0+i*h);
	}
	s*=(float)h/2.0;
	printf("final result:\t%f",s);
}
