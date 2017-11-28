#include<stdio.h>
main()
{
	int n,i,j;
	float x[10],y[10],f[10][10],xp,s,p,u;
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
		p=1;
		for(j=0;j<n;)
		{
			if(i!=j)
			{
				p*=(xp-x[j])/(x[i]-x[j]);
			}
			j+=1;
		}
		s+=p*y[i];
	}
	printf("\nThe req point: %f",s);
}







