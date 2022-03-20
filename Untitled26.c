#include <stdio.h>
#include <math.h>

int main(){

printf("YuvrAJ Dahiya\n");

float principal, rate, time, si, ci, r;

printf("enter the principal amount\n"); 
scanf("%f", &principal);

printf("enter the rate of interest \n"); 
scanf("%f", &rate); 
printf("enter the period of time \n"); 
scanf("%f", &time);

si= principal *(rate / 100) * time; 
printf("Simple Interest=%F\n", si);

ci =principal * pow (1 + rate / 100, time) - principal;

printf("Compound interest = %f\n", ci);

return 0;
}
