#include<stdio.h>
int main()
{
	int i,j,k,n;
	float a[20][20],x[20],m,s=0.0;
	printf("\n enter the values that are unknown:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=n+1;j++)
		{
			printf("\n enter the value of a[%d][%d]=  ",i,j);
			scanf("%f",&a[i][j]);
		}
	
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			m=a[j][i]/a[i][i];
			for(k=i;k<=n+1;k++)
			{
				a[j][k]=a[j][k]-m*a[i][k];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		s=0;
		for(j=i+1;j<=n;j++)
		{
			s=s+a[i][j]*x[j];
		}
		x[i]=(a[i][n+1]-s)/a[i][i];
	}
	for(i=1;i<=n;i++)
	{
		printf("\n value of x[%d]:%f",i,x[i]);
	
	}
}
