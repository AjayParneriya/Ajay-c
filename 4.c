// WAP to find simple interest

#include<stdio.h>
int main()

{
	int p,r,t,st;
	printf("Enter the value of intrest: ");
	scanf("%d%d%d",&p,&r,&t);
	
	st=(p*r*t)/100;
	
	printf("%d",st);
	
	return 0;
	
}
