#include<stdio.h>
int main()
{
	int i,j,n;
	float x[5],y[5],f[5][5]={0},h,u,s,p;
	float xp;
	printf("enter the value of xp");
	scanf("%f",&xp);
	printf("enter the number of poles");
	scanf("%d",&n);
	printf("\n enter x\n");
		for(i=0;i<n;i++)
			scanf("%f",&x[i]);
	printf("\nenter y\n");
		for(j=0;j<n;j++)
			scanf("%f",&y[j]);
	for(i=0;i<n;i++)
		f[0][i]=y[i];
	for(i=1;i<n;i++)
	{
		for(j=i;j<n;j++)
		{	
			f[i][j]=f[i-1][j]-f[i-1][j-1];
		}
	}
	printf("\nN.B.D.T\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%f\t",f[i][j]);
			printf("\n");
	}
	h=x[1]-x[0];
	u=(xp-x[n-1])/h;
	s=y[n-1];
	p=1;
	 for(i=1;i<n;i++)
	{
		p=(u+i-1)/i;
		s=s+p*f[i][n-1];
	}
	printf("the value is %f\n",s);
}
