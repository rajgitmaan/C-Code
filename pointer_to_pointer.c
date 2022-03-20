#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i;
    int **k = &j;
    printf("address of j = %u\n", &j);
    printf("Address of i = %u\n", *(&j));
    printf(" Address of k = %u\n", &k);
    printf("Address of j = %u\n", *(&k));
    printf(" Address of i = %u\n", **(&k));
    printf(" value of = %u\n", ***(&k));

    return 0;
}
