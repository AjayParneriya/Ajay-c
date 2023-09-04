// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    
    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively reverse the remaining substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    int length = strlen(input);
    reverseString(input, 0, length - 1);
    
    printf("Reversed string: %s\n", input);
    
    return 0;
}

