#include <stdio.h>
int main(){

printf("Yuvraj Dahiya\n");
int a =2, b, prime = 1; 
printf("enter the number\n");

scanf("%d", &b);

while (a < b)

{
if(b%a ==0)
prime = 0;
break;
}
a++;

if (prime == 0)
{
printf("%d is not a prime number\n", b);
}

else
{

printf("%d is a prime number\n", b);

}
return 0;
}
