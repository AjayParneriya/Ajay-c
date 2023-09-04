// Sum of odd numbers WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int num,i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and print the sum of odd numbers in the table
    int sum = 0;
    for (i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum += i;
            printf("Number: %d, Sum: %d\n", i, sum);
        }
    }

    return 0;
}

