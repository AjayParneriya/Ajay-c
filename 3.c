// WAP to find area of circle, rectangle and triangle

#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
float circleArea(float radius) {
    return 3.14159 * radius * radius;
}

// Function to calculate the area of a rectangle
float rectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a triangle
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float radius, length, width, base, height;

    printf("Select a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle: %.2f\n", circleArea(radius));
            break;

        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of the rectangle: %.2f\n", rectangleArea(length, width));
            break;

        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of the triangle: %.2f\n", triangleArea(base, height));
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

