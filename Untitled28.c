#include <stdio.h>

// write a C program to find sum of all odd numbers between 1 to n.

int main(){

printf("Yuvraj dahiya\n");

int a, n, sum = 0; 

printf("enter the value of n\n");
scanf("%d", &n); 

for(a=1; a <=n; a++)
{

if(a % 2 != 0)
{
	
printf("%d,", a);
sum += a;
}
}

printf("Sum = %2d", sum);

return 0;

}
