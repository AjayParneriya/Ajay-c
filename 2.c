// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main()

{
	int a,p,addition,subtraction,multiplication;
	float division,modulo;
	
	printf("Enter the a:- ");
	scanf("%d",&a);
	printf("Enter the p:- ");
	scanf("%d",&p);
	
	addition=a+p;
	subtraction=a-p;
	multiplication=a*p;
	division=a/p;
	modulo=a%p;
	
	printf("addition = %d\n",addition);
	printf("subtraction = %d\n",subtraction);
	printf("multiplication = %d\n",multiplication);
	printf("division = %f\n",division);
	printf("modulo = %f\n",modulo);
	
	return 0; 
}
