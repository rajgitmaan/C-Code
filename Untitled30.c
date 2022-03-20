#include <stdio.h>

int main()
{
    printf("yuvraj Dahiya\n");
    int a, b, r, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = a;
    while (a != 0)
    {
        r = a % 10;
        sum = sum * 10 + r;
        a /= 10;
    }
    printf("after reverse = %d", sum);
    return 0;
}


