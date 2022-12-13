//9.WAP to perform cross-diagonal sum of 2D array.
#include<stdio.h>
main()
{
	int a[50][50],n,i,j,sum=0,sum1=0;
	
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
			
		if(i==j)
	    	{
			 	sum=sum+a[i][j];
		    }
		
		if((i+j)==n-1)
			{
				sum1=sum1+a[i][j];
			}
		}
	}
	printf("\n------------ diagonal %d =\n",sum);
	
	printf("\n------------Anti diagonal %d =\n",sum1);
		
	printf("\n------------Cross diagonal %d =\n",sum+sum1);
}
