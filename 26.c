// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <stdbool.h>

int reverseString(char *str) 

{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    int start = 0;
    int end = length - 1;
    
    while (start < end) 
	{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}


bool isPalindrome(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) 
	{
        if (str[start] != str[end]) 
		{
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main() 
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);

    if (isPalindrome(inputString)) 
	{
        printf("The string is a palindrome.\n");
    } 
	else 
	{
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

