/* 3. How many Even numbers are there
   4. How many odd numbers are there */

#include<stdio.h>

int main()

{
	int n,i;
	printf("Enter the number ");
	scanf("%d",&n);
	
	printf("\n***Even number***");
	for(i=2;i<=n;i=i+2)
	{
		printf("%d\n",i);
	}
	
	printf("\n***Odd number***");
	for(i=1;i<=n;i=i+2)
	{
		printf("%d\n",i);
	}
	
	return 0;
}

