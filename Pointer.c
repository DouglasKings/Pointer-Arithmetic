#include <stdio.h>

// Function prototype
void printArray(int* arr, int size);

int main() {
    // Declare and initialize an integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // Get the size of the array (number of elements)
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function to print the array using pointer arithmetic
    printArray(numbers, size);

    return 0;
}

// Function to print the array using pointer arithmetic
void printArray(int* arr, int size) {
    // Initialize a pointer to the start of the array
    int* ptr = arr;

    // Iterate through the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr); // Dereference the pointer to get the value
        ptr++; // Increment the pointer to point to the next element
    }

    printf("\n");
}
