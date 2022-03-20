#include <stdio.h>

int main(){


printf("yuvraj dahiya\n");

int num1 = 0, num2 = 1, a, num3,s; 
printf("enter a number\n");
scanf("%d", &s);

printf("0, 1, ");

for (a = 0; a <= s; a++)

{

num3 = num1 + num2;

printf("%d, ", num3);

num1 = num2;

num2 = num3;

}

return 0;

}
