#include <stdio.h>
double calculateAverage(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    return (double)sum / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    double avg = calculateAverage(arr, size);

    printf("Average of the array elements: %.2f\n", avg);

    return 0;
}
