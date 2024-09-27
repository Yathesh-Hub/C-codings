#include <stdio.h>
int main()
{
    char name[100], dob[20] ,g[10] ,add[100], contact[20];

    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your DOB (DD/MM/YYYY): ");
    scanf("%s", dob);
    printf("Enter your gender: ");
    scanf("%s", g);
    printf("Enter your address: ");
    scanf("%s", add);
    printf("Enter your contact number: ");
    scanf("%s", contact);

    printf("\n\nPersonal Details\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Date of Birth: %s\n", dob);
    printf("Gender: %s\n", g);
    printf("Address: %s\n", add);
    printf("Contact Number: %s\n", contact);

    return 0;

}

