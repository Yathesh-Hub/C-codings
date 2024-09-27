#include <stdio.h>

// Function to calculate the average of array elements using pointers
double calculateAverage(int *arr, int size) {
    int sum = 0;
    int *ptr = arr; // Pointer to the start of the array

    // Calculate sum of all elements using pointer arithmetic
    for (int i = 0; i < size; i++) {
        sum += *ptr; // Add value pointed by ptr to sum
        ptr++;       // Move pointer to the next element
    }

    // Calculate average
    return (double)sum / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate average using the calculateAverage function
    double avg = calculateAverage(arr, size);

    // Display the average
    printf("Average of the array elements: %.2f\n", avg);

    return 0;
#include <stdio.h>

// Function to calculate the average of array elements using pointers
double calculateAverage(int *arr, int size) {
    int sum = 0;
    int *ptr = arr; // Pointer to the start of the array

    // Calculate sum of all elements using pointer arithmetic
    for (int i = 0; i < size; i++) {
        sum += *ptr; // Add value pointed by ptr to sum
        ptr++;       // Move pointer to the next element
    }

    // Calculate average
    return (double)sum / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate average using the calculateAverage function
    double avg = calculateAverage(arr, size);

    // Display the average
    printf("Average of the array elements: %.2f\n", avg);

    return 0;
}
