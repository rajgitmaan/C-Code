#include <stdio.h>

int main(){

printf("Yuvraj Dahiya\n");

int num= 1, n, factorial =1; 
printf("enter your number \n"); 
scanf("%d", &n);

for (num =1; num <=n; num++)

{

factorial*=num;

}

printf("factorial of %d = %4d\n", n, factorial);

return 0;
}
