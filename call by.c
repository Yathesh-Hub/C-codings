#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Original values: a = %d, b = %d\n", a, b);

    swapByValue(a, b);
    printf("Swapped values using call by value: a = %d, b = %d\n", a, b);

    swapByReference(&a, &b);
    printf("Swapped values using call by reference: a = %d, b = %d\n", a, b);

    return 0;
}

