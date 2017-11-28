#include<stdio.h>
main()
{
	int n,i=0,j=0;
	float xp,x[10],y[10],s=0.0,l;
	printf("Enter the number of poles:");
	scanf("%d",&n);
	printf("enter the value of xp\n");
	scanf("%f",&xp);
	for(i=0;i<n;i++)
	{
		printf("\nenter the value of x[%d]:\t");
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nenter the value of y[%d]:\t");
		scanf("%f",&y[i]);
	}
	i=0;
	while (i<=(n-1))
	{
		l=1.0;
		j=0;
		while(j<=(n-1))
		{
			if(i!=j)
			{
				l=l*((xp-x[j])/(x[i]-x[j]));
			}
			j++;
		}
			s=s+l*y[i];
			i++;
		}
	
		printf("the value of s %f\n",s);
	
}

