//WAP to find average of 2D array.
#include<stdio.h>
main()
{
	int i,j,n,k,a[50][50],sum=0;
	float p;
	
	printf("Enter the size for array n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n--------------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
	p=sum/n;
	printf("\n");
	}
	printf("Enter the avreage of array %f ",p);
	
}