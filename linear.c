#include <stdio.h>
int main() {
    int array[100], size, element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    for (int i = 0; i < size; ++i) {
        if (array[i] == element) {
            found = 1;
            printf("Element found at index %d.\n", i);
            break;
        }
    }

    if (found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}

