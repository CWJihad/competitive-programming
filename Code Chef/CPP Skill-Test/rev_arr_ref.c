#include <stdio.h>

void reverseArray(int *arr, int size) {
    // Initialize a pointer 'left' to the first element
    int *left = arr;
    printf("left %d", left);
    // Initialize a pointer 'right' to the last element
    int *right = arr + size - 1;
    printf("\nright %d", right);

    // Loop as long as the left pointer is before the right pointer
    while (left < right) {
        // Swap the elements pointed to by 'left' and 'right'
        int temp = *left;
        *left = *right;
        *right = temp;

        // Move 'left' pointer one step forward
        left++;
        // Move 'right' pointer one step backward
        right--;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    reverseArray(myArray, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}