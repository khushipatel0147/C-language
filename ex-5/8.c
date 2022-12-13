#include<stdio.h>
main()
{
	int i,j,x,z=0,a[70][70],sum=0;
	
	printf("Enter Tha Row Colum Size Of Array := ");
	scanf("%d",&x);	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("\n---*---*---*---*--- Array  ---*---*---*---*---\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	printf("\n---*---*---*---*---Array Row Wise Sum  ---*---*---*---*---\n");
	for(i=0;i<x;i++)
	{
		sum=0;
		for(j=0;j<x;j++)
		{
			sum=sum+a[i][j];
			
		}
		printf("%d\n",sum);
		printf("\n");
		
	}
	printf("\n---*---*---*---*---Array Coulmn Wise Sum ---*---*---*---*---\n");
	for(i=0;i<x;i++)
	{
		sum=0;
		for(j=0;j<x;j++)
		{
			sum=sum+a[j][i];
			
		}
		printf("%d\n",sum);
		printf("\n");
		
	}
}