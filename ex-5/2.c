// Write C program to print array in reverse order

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
	
	for(i=n-1;i>0-1;i--)
	{   
			printf("%d",a[i]);
			printf("\n");
	}	
		
}