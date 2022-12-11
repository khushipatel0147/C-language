// GET & PRINT 1D ARRAY OF N ELEMENTS

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
	printf("\n=*=#=*=#=*=#=*=#=*=#=*=#=*=#=*=#=*=\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
}