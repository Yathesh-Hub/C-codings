#include <stdio.h>
struct student
{
    int rollNumber;
    char name[50];
    float marks[3];
};

int main() {
    struct student s;

    printf("Enter roll number of the student: ");
    scanf("%d", &s.rollNumber);

    printf("Enter name of the student: ");
    scanf("%s", s.name);

    printf("Enter marks of three subjects: ");
    for (int i = 0; i < 3; ++i) {
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks in Subject 1: %.2f\n", s.marks[0]);
    printf("Marks in Subject 2: %.2f\n", s.marks[1]);
    printf("Marks in Subject 3: %.2f\n", s.marks[2]);

    return 0;
}

