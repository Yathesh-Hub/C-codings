#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Choose a string operation:\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Compare\n");
    printf("4. String Reverse\n");
    printf("5. String Lowercase\n");
    printf("6. String Uppercase\n");
    printf("7. String Concatenation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of the string: %ld\n", strlen(str1));
            break;
        case 2:
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;
        case 3:
            printf("Enter another string: ");
            getchar();
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        case 4:
            strrev(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 5:
            strlwr(str1);
            printf("Lowercase string: %s\n", str1);
            break;
        case 6:
            strupr(str1);
            printf("Uppercase string: %s\n", str1);
            break;
        case 7:
            printf("Enter another string to concatenate: ");
            getchar();
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


