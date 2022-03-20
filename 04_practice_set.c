#include <stdio.h>
int sum(int *, int *, int *);
float avg(float *, float *, float *);
int main()
{
    int p = 2, q = 4, r = 6;
    float a = 2, b = 4, c = 6;
    printf(" sum = %u", sum(&p, &q, &r));
    printf(" avg = %.2f", avg(&a, &b, &c));
    return 0;
}
int sum(int *a, int *b, int *c)
{
    *a = 3, *b = 5, *c = 7;

    return *a + *b + *c;
}
float avg(float *x, float *y, float *z)
{
    *x = 3, *y = 5, *z = 7;
    return (*x + *y + *z) / 3;
}
