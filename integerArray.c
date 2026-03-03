#include <stdio.h>
#include <string.h>

int main() {

    int array[5] = {1,2,3,4,5};

    int *ptr = array;

    int n = sizeof(array) / sizeof(array[0]);

    int temp;

    for(int i = 0; i < n / 2; i++) {

        temp = *(ptr + i);
        *(ptr + i) = *(ptr + n - 1 - i);
        *(ptr + n - 1 - i) = temp;
    }

    // Print reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
} 