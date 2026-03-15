#include <stdio.h>
int array[4] = {1, 2, 3, 4, 5};
int sumArray(int *address = NULL)

{

    int sum;

    for (int i = 0; i <= 4; i++)
    {
        sum += array[*(address + i)];
    }
    printf("The sum of all elements in the array is %d ", sum);
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    int *address = &array;

    printf("Let us find the sum of all elements in the array: %d ")
}