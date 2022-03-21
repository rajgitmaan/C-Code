#include <stdio.h>
// wap to print sum of 2 variables using call by reference
int sum(int *a, int *b)
{
    *a = 7, *b = 10;
    return *a + *b;
}
int main()
{
   printf("yuvraj dahiya\n");
    int x = 4, y = 7;
    printf("Sum = %d", sum(&x, &y));
    return 0;
}
