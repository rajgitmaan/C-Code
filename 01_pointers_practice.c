// Write a program in C to add two numbers using pointers.
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Yugam Grover\n");
    printf("\n");
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a,&b);
    int *ptr = &a;
    int *pt = &b;
    printf("%d + %d = %d\n", a, b, *ptr+*pt);
    printf("%d x %d = %d\n", a, b, (*ptr)*(*pt));
    printf("%d - %d = %d\n", a, b, (*ptr)-(*pt));

    return 0;
}

    // sum = *ptr+*pt;
    // printf("address of a = %d\n address of b = %d\n address of their sum = %d", &a, &b,&sum );