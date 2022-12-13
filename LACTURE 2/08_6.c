//Perform Coulmn-Wise Sum Of 2D Array

#include<stdio.h>
main()
{
	int i,j,n,k,a[50][50],sum=0;
	
	printf("Enter the size for array n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   	scanf("%d",&a[i][j]);
		}
	}
		printf("\n----------Total----------\n");
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
		
			sum=sum+a[j][i];
		}
	printf("%d",sum);
	printf("\n");
	}
		printf("\n----------Array---------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}