#include<stdio.h>
main()
{
	int n,i,j;
	float x[10],y[10],f[10][10],xp,s,p,h,u;
	printf("\nEnter the no of poles:");
	scanf("%d",&n);
	printf("\nEnter the value of interpolation point:");
	scanf("%f",&xp);
	for(i=0;i<n;i++)
	{
		printf("\nEnter x[%d]:",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter y[%d]:",i);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		f[i][j]=0;
	}
	h=x[1]-x[0];
	u=(xp-x[0])/h;
	s=y[0];
	p=1;
	for(j=0;j<n;j++)
	{
		f[0][j]=y[j];
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			f[i][j]=f[i-1][j+1]-f[i-1][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f\t",f[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		p=(p*(u-i+1))/i;
		s=s+p*f[i][0];
	}
	printf("\nThe req point: %f",s);
}







