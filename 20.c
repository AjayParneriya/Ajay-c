/* WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) */

#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your choice: \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication: %.2f\n", result);
            break;
        case 4:
            result = (float)num1 / num2;
            printf("Division: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

