#include <stdio.h>
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return str1[i] - str2[i];
}

void stringReverse(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void stringToLower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
}

void stringToUpper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
}

void stringConcatenate(char str1[], char str2[]) {
    int length1 = stringLength(str1);
    int length2 = stringLength(str2);
    for (int i = 0; i < length2; i++) {
        str1[length1 + i] = str2[i];
    }
    str1[length1 + length2] = '\0';
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str1);

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
            printf("Length of the string: %d\n", stringLength(str1));
            break;
        case 2:
            stringCopy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;
        case 3:
            printf("Enter another string: ");
            scanf("%s", str2);
            if (stringCompare(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        case 4:
            stringReverse(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 5:
            stringToLower(str1);
            printf("Lowercase string: %s\n", str1);
            break;
        case 6:
            stringToUpper(str1);
            printf("Uppercase string: %s\n", str1);
            break;
        case 7:
            printf("Enter another string to concatenate: ");
            scanf("%s", str2);
            stringConcatenate(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


