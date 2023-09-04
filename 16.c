// Write a program make a summation of given number

#include <stdio.h>

int main() {
    int number,i, sum = 0;

    // Get the input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum
    for (i = 1; i <= number; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of numbers from 1 to %d is: %d\n", number, sum);

    return 0;
}

