#include <stdio.h>
void wrongswap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 5, y = 6;
    printf("Before Swap\n");
    printf("x = %d, y = %d\n", x, y);
    // wrongswap(x,y); // this will not swap the
    // values of x and y due to call by value.
    swap(&x, &y);
    printf("After Swap\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
// void wrongswap (int a, int b){
//     int s;
//     s = a;
//     b = a;
//     a = s;

// }
void swap(int *a, int *b)
{
    int s;
    s = *a;
    *a = *b;
    *b = s;
}

