// Write a program to find out the max from given number

#include <stdio.h>

int main() {
    int n, num, max,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Initialize max with the first number
    printf("Enter number 1: ");
    scanf("%d", &max);

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Compare the current number with the current max
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

