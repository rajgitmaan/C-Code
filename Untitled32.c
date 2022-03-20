#include <stdio.h>
int main()
{
printf("yuvraj dahiya\n");
int a=1, num, sum = 0;
printf("enter the value of num\n");
scanf("%d", &num);
printf("\n"); 
do
{
printf("%d, square = %d\n",a, a*a);
sum+=a;
a++;
} while (a <= num);
printf("Sum of digits = %d" , sum);
return 0;
}

