#include <stdio.h>

// Recursive function to find the greatest number
int findMax(int arr[], int n) {
    // Base case
    if (n == 1)
        return arr[0];

    // Recursive call
    int max = findMax(arr, n - 1);

    // Compare last element with current max
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int greatest = findMax(arr, n);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}