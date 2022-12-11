// FIND AVERAGE OF 1D ARRAY

#include<stdio.h>
main()
{
	int i,n,sum=0,a[100];
	float v;
	printf(" Enter Value Size Of Array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n=*=#=*=#=*=#=*=#=*=#=*=#=*=#=*=#=*=\n");
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
		v=sum/n;
		printf("%f\n",v);
}