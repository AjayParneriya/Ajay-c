// WAP to swap two numbers without using third variable

#include<stdio.h>

int main()

{
    int a=10;
    int b=20;
    
    printf("\nBefore swapping value of a and b is %d %d",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\nAfter swapping value of a and b is %d %d",a,b);
    
    return 0;
	
} 

