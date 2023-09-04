// WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure example
    struct Student student1;
    student1.rollNumber = 101;
    strcpy(student1.name, "John");
    student1.marks = 85.5;

    // Union example
    union Data data;
    data.intValue = 42;
    printf("Value in intValue: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Value in floatValue: %f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("Value in stringValue: %s\n", data.stringValue);

    // Display sizes
    printf("Size of struct Student: %lu bytes\n", sizeof(struct Student));
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}

