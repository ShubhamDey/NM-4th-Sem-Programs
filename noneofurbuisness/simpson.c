#include<stdio.h>
float f(float x)
{
	return(1/((x*x)+2*x+10));
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
	s=f(x0)+5*f(x0+h)+f(x0+2*h)+6*f(x0+3*h)+f(x0+4*h)+5*f(x0+5*h)+f(xn);
	for(i=7;i<n;i+=6)
	{
		s=s+6*f(x0+(i+2)*h)+2*f(x0+(i-1)*h)+5*f(x0+i*h)+5*f(x0+(i+4)*h)+f(x0+(i+3)*h)+f(x0+(i+1)*h);
	}
	s=s*(3*h)/10.0;
	printf("final result:\t %f",s);
}
