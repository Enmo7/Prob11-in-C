#include <stdio.h>
#include <stdlib.h>

struct student {
    char firstName[50];
    int roll;
    float Age, Section, Degree;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor Student Number%d,\n", s[i].roll);
        printf("Enter Student Name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Age: ");
        scanf("%f", &s[i].Age);
        printf("Enter Degree: ");
        scanf("%f", &s[i].Degree);
        printf("Enter Section: ");
        scanf("%f", &s[i].Section);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nStudent Number: %d\n", i + 1);
        printf("Student Name: ");
        puts(s[i].firstName);
        printf("Age: %.1f \n", s[i].Age);
        printf("Degree: %.1f \n", s[i].Degree);
        printf("Section: %.1f \n", s[i].Section);
        printf("\n");
    }
    return 0;
}
