#include <stdio.h>

unsigned long long factorial(int number) {
    unsigned long long result = 1;
    for(int i = 2; i <= number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if(number < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 1;  // exit with error code
    }

    printf("The factorial of %d is %llu\n", number, factorial(number));

    return 0;
}