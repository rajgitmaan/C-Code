#include <stdio.h>
//  Write a program in C to swap elements using call by reference
void swap(int *a, int *b, int *c)
{
    int k;
    k = *c;
    *c = *b;
    *b = *a;
    *a = k;
}
int main()
{
    int a, b, c;
    printf("\nEnter the elements = ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before swap");
    printf("\n1st element = %d\n2nd element = %d\n3rd element = %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("*******************");
    printf("\nAfter swap");
    printf("\n1st element = %d\n2nd element = %d\n3rd element = %d", a, b, c);
    return 0;
}
