#include<stdio.h>
int main()
{
	int n,i,j;
	float x[50],y[50],f[50][50]={0},h,u,s,p=1,xp;
	printf("\n enter the no of poles");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter x[%d]",i);
		scanf("%f",&x[i]);
	}
	printf("\n enter xp");
	scanf("%f",&xp);
	for(i=0;i<n;i++)
	{
		printf("\n enter y[%d]",i);
		scanf("%f",&y[i]);
	}
		for(j=0;j<n;j++)
		f[0][j]=y[j];
		
		for(i=1;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				f[i][j]=f[i-1][j]-f[i-1][j-1];
			}
		}
	for(i=1;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("%f\t",f[i][j]);
	}
	printf("\n");
	}
	h=x[1]-x[0];
	u=(xp-x[n-1])/h;
	s=y[n-1];
	for(i=1;i<n;i++)
	{
	p=(p*(u+i-1))/i;
	s=s+p*f[i][n-1];
	}
	printf("\n the result is%f",s);
	return(0);
}
