#include<stdio.h>
int main()
{
	int n,i,j;
	float h,u,s,p,xp,x[5],y[5],f[5][5]={0};
	system("clear");

	printf("enter the number of poles");
	scanf("%d",&n);
	printf("value of xp");
	scanf("%f",&xp);

	printf("enter the value of x");
	for(i=0;i<n;i++)
		scanf("%f",&x[i]);

	printf("enter the value of y");
	for(j=0;j<n;j++)
		scanf("%f",&y[j]);

	for(i=0;i<n;i++)
		f[0][i]=y[i];

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
			printf("%f\t",f[i][j]);
		printf("\n");
	}
	h=x[1]-x[0];
	u=(xp-x[0])/h;
	s=y[0];
	p=1.0;
	for(i=1;i<n;i++)
	{
		p=p*((u-i+1.0)/i);
		s=s+p*f[i][0];
	}	
	printf("the value is:\n%f",s);
}


