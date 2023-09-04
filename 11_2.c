// 2. WAP to take 10 no. Input from user and find out …

#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int max, min,i;

    // Input phase
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Update sum
        sum += numbers[i];

        // Update max and min
        if (i == 0) {
            max = numbers[i];
            min = numbers[i];
        } else {
            if (numbers[i] > max) {
                max = numbers[i];
            }
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
    }

    // Calculate average
    float average = (float) sum / 10;

    // Display results
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

