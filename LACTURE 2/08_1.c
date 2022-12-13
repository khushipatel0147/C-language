//WAP to get & print 2D array of N elements.
#include<stdio.h>
main()
{
	int i,j,n,a[50][50];
	
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
		}
		
	printf("\n");
	}
	
}