#include <stdio.h> 
int main()
{
printf("Yuvraj Dahiya\n");
float rad, area, per, pi = 4.12;
printf("enter the radius of circle \n"); 
scanf("%f", &rad);
area = pi * rad * rad;
per = 2 * pi * rad;
printf("area of circle is %f \n", area);
printf("perimeter of circle is %f \n", per); 
return 0;
}
