#include <stdio.h>

union abc
{
    int a;
    int b;
    char c[20];
    char d[40];
} e;

union abc *ptr = NULL;

void user()
{
    ptr = &e;

    printf("\nEnter a: ");
    scanf("%d", &ptr->a);

    printf("\nNow enter string c: ");
    scanf("%s", ptr->c);

    printf("\nNow enter string d: ");
    scanf("%s", ptr->d);
}

void print()
{
    printf("\nCurrent value in union:\n");
    printf("a: %d\n", e.a);
    printf("c: %s\n", e.c);
    printf("d: %s\n", e.d);
}

int main()
{
    user();
    print();
    return 0;
}