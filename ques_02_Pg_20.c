#include <stdio.h>

int main()
{
    // WAP to calculate gross salary given dearness allowance=>40% of basic salary
    // and house ren allowance=> 20% of salary
    printf("yuvraj dahiya\n"); 
    int salary, a;
    printf("Your basic salary = ");
    scanf("%d", &salary);
    a = salary + 0.4 * salary + 0.2 * salary;
    printf("Gross Salary = %2d", a);
    return 0;
}
