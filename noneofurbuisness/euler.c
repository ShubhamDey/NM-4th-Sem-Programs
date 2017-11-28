#include<stdio.h>
float f(float x,float y)
{
	return (x+y);
}
main()
{
	float x,y,xp,h;
	printf("enter the value of x,y,xp,h:\t");
	scanf("%f %f %f %f",&x,&y,&xp,&h);
	
	while(x<xp)
	{
		y=y+h*f(x,y);
		x=x+h;
		printf("\n final value of x=%f y=%f",x,y);
	}
}
