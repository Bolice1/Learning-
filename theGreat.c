#include <stdio.h>

// Recursive function to find maximum element
int findMax(int arr[], int n) {
    // Base case: if only one element
    if (n == 1) {
        return arr[0];
    }

    // Recursive call to find max in first n-1 elements
    int max = findMax(arr, n - 1);

    // Compare last element with max of previous elements
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int arr[] = {12, 45, 7, 89, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);

    printf("Greatest number in the array is: %d\n", max);

    return 0;
}