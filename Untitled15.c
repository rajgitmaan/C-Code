#include <stdio.h>
int main()
{
printf("Yuvraj Dahiya\n");
int a,s,num;
printf("Enter your number\n");
scanf("%d",&num);
a=num%10;
s=num*num;
if(a == 5)
{
printf("Square of the given number is %d\n", s);
}
else
{
printf("Invalid number\n");
}
return 0;

}


