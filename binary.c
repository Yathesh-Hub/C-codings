#include <stdio.h>
int binarySearch(int array[], int left, int right, int element) {
    if (left <= right) {
        int mid = (left + right) / 2;
        if (array[mid] == element) {
            return mid;
        }
        if (array[mid] < element) {
            return binarySearch(array, mid + 1, right, element);
        }
        return binarySearch(array, left, mid - 1, element);
    }
    return -1;
}
int main() {
    int array[100], size, element, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    index = binarySearch(array, 0, size - 1, element);
    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}

