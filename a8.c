#include <stdio.h>
#include <stdio.h>

int main()
{
    printf("Yuvraj Dahiya\n");
    int first, second, *p, *q, sum,mul,divi,sub;
    printf("Enter two integers to oprate\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    sub = *p - *q;
    mul = *p * *q;
    divi = *p / *q;
    printf("Sum of entered numbers = %d\n",sum);
    printf("subtact of entered numbers = %d\n",sub);
    printf("multiply of entered numbers = %d\n",mul);
    printf("divide of entered numbers = %d\n",divi);
    return 0;
}

