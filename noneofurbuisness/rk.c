#include<stdio.h>
float f(float x,float y)
{
	return (x+y);
}
main()
{
	float x0,y0,xp,h,k1,k2,k3,k4,k;
	printf("enter the value of x,y,xp,h:\t");
	scanf("%f %f %f %f",&x0,&y0,&xp,&h);
	
	while(x0<xp)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+(h/2.0),y0+(k1/2.0));
		k3=h*f(x0+(h/2.0),y0+(k2/2.0));
		k4=h*f((x0+h),(y0+k2));
		k=(1.0/6.0)*(k1+2*k2+2*k3+k4);
		y0=y0+k;
		x0=x0+h;
		printf("\n final value of x=%f y=%f",x0,y0);
	}
}
