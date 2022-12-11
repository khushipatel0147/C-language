// FIND PEFORM ADDITION OF 1D ARRAY & STORE IT INTO ANOTHER

#include<stdio.h>
main()
{
	int i,x,y,a[5],b[5],c[5];
	
	
	printf(" Enter Value Size Of (A) Array");
	scanf("%d",&x);

	printf("\n=*=#=*=#=*=#=*=- A -*=#=*=#=*=#=*=#=*=\n");		
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n=*=#=*=#=*=#=*=- B -*=#=*=#=*=#=*=#=*=\n");
	
	for(i=0;i<x;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n=*=#=*=#=*=#=*=- C -*=#=*=#=*=#=*=#=*=\n");

	for(i=0;i<x;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}
}
