#include<stdio.h>
main()
{
	float a[10][10],x[10],m,s;
	int n,i,j,k;
	printf("\nEnter the number of constraints:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
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
				a[j][k]=a[j][k]-(m*a[i][k]);
			}
		}
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		s=0;
		for(j=i+1;j<=n;j++)
			s+=a[i][j]*x[j];
		x[i]=(a[i][n+1]-s)/a[i][i];
		
	}
	printf("\nElements are:");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n+1;j++)
                {
                        printf("%f ",a[i][j]);
                }
                printf("\n");
        }

	for(i=1;i<=n;i++)
	{
		printf("\nThe result of x[%d]",i);
		printf("is %f",x[i]);
	}
}
