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
	printf("Enter The Value For Insert :-");
	scanf("%d",&nv);
	

		a[ps]=nv;
		
	printf("\n========== New Array ==========\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}