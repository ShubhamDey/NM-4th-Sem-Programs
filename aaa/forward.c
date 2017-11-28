#include<stdio.h>
int main()
{
	int n,i,j;
	float f[15][15]={0},u,h,x[15],y[15],s=0.0,p,xp;
	printf("\n enter the number of poles:");
	scanf("%d",&n);
	printf("\n enter the value of x for which we want to find the value of y:");
	scanf("%f",&xp);
	printf("\n enter the value for x:");
	for(i=0;i<n;i++)
	{
		printf("\n x[%d]:",i+1);
		scanf("%f",&x[i]);
	}
	printf("\n enter the value for y:");
	for(i=0;i<n;i++)
	{
		printf("\nu[%d]:",i+1);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
		f[0][i]=y[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			f[i][j]=(f[i-1][j+1]-f[i-1][j])/(x[i+j]-x[j]);
		}
	}
	printf("\nNewton's Difference Table:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%f\t", f[i][j]);
		printf("\n");
	}
	h=x[1]-x[0];
	u=(xp-x[0])/h;
	s=y[0];
	p=1;
	for(i=1;i<n;i++)
	{
		p=p*(xp-x[i-1]);
		s=s+p*f[i][j];
	}

		printf("\n for xp=%f\typ=%f\n",xp,s);
}
