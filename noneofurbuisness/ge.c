#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number of constraints");
	scanf("%d",&n);
	float a[n][n+1],x[n],m,s=0;
	printf("enter the value of augmented matrix");
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n+1;j++)
	scanf("%f",&a[i][j]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			m=a[j][i]/a[i][i];
			for (k=1;k<=n+1;k++)
			{
				a[j][k]=a[j][k]-m*a[i][k];
			}
		}
	}
	printf("\nAUGMENTD MATRIX\n");
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n+1;j++)
			printf("%f  ",a[i][j]);
		printf("\n");
	}
	x[n]=(a[n][n+1])/(a[n][n]);
	for(i=n-1;i>=1;i--)
	{
		s=0;
		for(j=i+1;j<=n;j++)
		{
			s=s+a[i][j]*x[j];
		}
		x[i]=(a[i][n+1]-s)/(a[i][i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("the value of x[%d] is: ",i);
		printf("%f\n",x[i]);
	}

}
