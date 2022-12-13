//WAP to find length of 2D array.
#include<stdio.h>
main()
{
	int i,j,n,k,a[50][50];
	
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
			k++;
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	printf("Enter the Length of array %d ",k);
	
}