// Write a program you have to make a summation of first and last Digit.

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    lastDigit = number % 10;

    // Find the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Calculate the sum
    sum = firstDigit + lastDigit;

    // Display the result
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}

