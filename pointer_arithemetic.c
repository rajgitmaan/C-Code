#include<stdio.h>

int main()
{
    int arr[3] = {3,4,5}, *ptr = arr;
    printf("Yugam Grover\n");
    for(int i = 0; i < 3; i++)
    {
        printf("element %d of array = %d, Address = %d\n", i+1, *ptr, ptr);
        ptr++;
    }

return 0;
}
