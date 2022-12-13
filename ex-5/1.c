//Write C program to print all negative elements in an array.[1D]

#include<stdio.h>
main()
{
	int i,n,a[100];
	
	printf(" Enter Value Size Of Array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n---*---*---*---*---*---*---*---*---\n");
	
	for(i=0;i<n;i++)
	{   
		if(a[i]<0)
		{
			printf("%d",a[i]);
			printf("\n");
				
		}
	}	
		
}