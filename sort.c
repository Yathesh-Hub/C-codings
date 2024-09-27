#include <stdio.h>
int main()
{
    int array[100], size, i, j, minIndex, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size - 1; ++i) {
        minIndex = i;
        for (j = i + 1; j < size; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }

    printf("Sorted array:\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

