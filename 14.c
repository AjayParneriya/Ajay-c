/* WAP to print number in reverse order */

#include <stdio.h>

int main() {
    int number, originalNumber, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    printf("Reverse of %d is: ", number);

    while (number > 0) {
        remainder = number % 10;
        printf("%d", remainder);
        number /= 10;
    }

    printf("\n");

    return 0;
}

