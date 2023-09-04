// WAP Find out length of string without using inbuilt function

#include <stdio.h>
int stringLength(const char *str) 

{
    int length = 0;
    while (*str != '\0') 
	{
        length++;
        str++;
    }
    return length;
}

int main() 

{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    int length = stringLength(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}

