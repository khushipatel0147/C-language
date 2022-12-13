// Write C program to find sum of all elements of array.[1D]// GET & PRINT 1D ARRAY OF N ELEMENTS

#include<stdio.h>
main()
{
	int i,n,a[100],sum=0;
	
	printf(" Enter Value Size Of Array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n---*---*---*---*---*---*---*---*---\n");
	
	for(i=0;i<n;i++)
	{   
		sum=sum+a[i];
	
	}	
		printf("%d\n",sum);
}