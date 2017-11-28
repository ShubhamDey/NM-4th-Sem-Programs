#include<stdio.h>
main()
{
	int i,j,k,n;
	float a[5][5],x[5],m,s;
	printf("Enter the number of constraints:");
	scanf("%d",&n);


	/*TO CREATE THE AUGMENTED MATRIX*/
	printf("\nEnter the augmented matrix:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("\nA[%d][%d]:",i,j);
			scanf("%f",&a[i][j]);
		}
	}


	/*TO CREATE THE UPPER TRIANGULAR MATRIX*/
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				m=a[j][i]/a[i][i];
				for(k=i;k<=n+1;k++)
				{
					a[j][k]=a[j][k]-m*a[i][k];
				}
			}
		}
	}


	/*TO CALCULATE THE OTHER VARIABLES OTHER THAN N^TH VARIABLE*/
	for(i=1;i<=n;i++)
	{
		x[i]=a[i][n+1]/a[i][i];
	}


	/*TO PRINT THE UPPER TRIANGULAR MATRIX*/
	printf("\nThe Upper Triangular Matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("%f \t",a[i][j]);
		}
		printf("\n");
	}


	/*TO PRINT THE RESULT*/
	printf("\nThe Result is:");
	for(i=1;i<=n;i++)
	{
		printf("\nx[%d]:%f \t\n",i,x[i]);
	}
}
