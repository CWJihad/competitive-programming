#include <iostream>
using namespace std;

// Function to compute the sum of the array
int sumOfArray(int arr[], int size) {
    // Complete the function
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arraySize;
    cin >> arraySize; // Size of the array

    int arr[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i]; // Input elements of the array
    }

    // Call the sum function and print the result
    cout << sumOfArray(arr, arraySize) << endl;

    return 0;
}
