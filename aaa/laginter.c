#include<stdio.h>
int main()
{
	int n,i,j;
	float x[15],y[15],s=0.0,p,xp;
	printf("\n enter the number of poles:");
	scanf("%d",&n);
	printf("\n enter the poles for:");
	for(i=0;i<n;i++)
	{
		printf("\n x[%d]:",i+1);
		scanf("%f",&x[i]);
	}
	printf("\n enter the value for:");
	for(i=0;i<n;i++)
	{
		printf("\nu[%d]:",i+1);
		scanf("%f",&y[i]);
	}
	printf("\n enter the value of x for which we want to find the value of y:");
	scanf("%f",&xp);
	for(i=0;i<n;i++)
	{
		p=1.0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			p=p*(xp-x[j])/(x[i]-x[j]);
		}
		s=s+p*y[i];
	}
		printf("\n for xp=%f\typ=%f\n",xp,s);
}
