#include <stdio.h>
#include <stdlib.h>  // for abs

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int numOne, numTwo;
    printf("Pass in two numbers to find their GCD: ");
    scanf("%d %d", &numOne, &numTwo);

    printf("The GCD between %d and %d is %d\n", numOne, numTwo, gcd(numOne, numTwo));

    return 0;
}