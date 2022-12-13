//find peform addition of 2D array & store it into athor.
#include<stdio.h>
main()
{
	int n,i,j,a[50][50],b[50][50],c[50][50],sum=0;
	
	printf("Enter The Size Of Array := ");
	scanf("%d",&n);
	
	printf("\n-------Enter the value of A array---------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}	
	printf("\n-------Enter the value of B array---------\n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);	
		}
	}
	printf("\n-------A & B Array Addition Is --------- \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\n");
			printf("%d ",c[i][j]);
		}
	}

}