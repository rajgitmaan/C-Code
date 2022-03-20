#include <stdio.h>
int main()
{
printf("Yuvraj Dahiya\n");
int age;
printf("enter your age\n");
scanf("%d", &age); 
if (age >= 18)
{
printf("Eligible for voting %d\n", age);
}
else
{
printf("Not eligible for voting  %d\n", age);
}
return 0;
}


