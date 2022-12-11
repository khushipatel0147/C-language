#include<stdio.h>
main()
{
	int a[50];
	int n,i,nv,ps;
	
	printf("Enter The Size Of Array :-");
	scanf("%d",&n);
	
	printf("\n========== User Enter Array ==========\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter The Value Position :-");
	scanf("%d",&ps);	

	for(i=ps;i<n;i++)
	{
		a[i]=a[i+1];
	}
		
	printf("\n========== New Array ==========\n");
	
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
}