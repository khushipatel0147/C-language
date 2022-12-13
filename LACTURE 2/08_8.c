//WAP to perform anti-diagonal sum of 2D array.
#include<stdio.h>
main()
{
	int a[50][50],n,i,j,sum=0;
	
	printf("enter the value of n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if((i+j)==n-1)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\n------------Anti diagonal %d =\n",sum);
}
