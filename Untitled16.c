#include <stdio.h>
int main()
{
printf("Yuvraj Dahiya\n");
int sales;
float s1, s2; 
printf("Enter Total sales\n");
scanf("%d", &sales); 
if (sales >= 100000)
s1 = 3000 + (0.3000) + (1.1 * 3000) + 500 + (sales * 0.1) + 500;
{
printf("Your salary is %f\n", s1);
}
if (sales < 100000)
{
s2 = 3000 + (0.2 * 3000) + (1.1 * 3000) + 500 + (sales* 0.05) + 200; 
printf("Your salary is %f\n", s2);
}
return 0;
}
