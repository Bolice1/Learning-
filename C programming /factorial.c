#include <stdio.h>
#include<stdlib.h>

int factorial(int number){
    if(number == 0 || number == 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    int number;
    printf("Pass in a number to find its factorial: ");
    scanf("%d", &number);

    if(number < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 0;  // exit the program
    }

    printf("\nThe factorial of %d is %d\n", number, factorial(number));

    return 0;
}