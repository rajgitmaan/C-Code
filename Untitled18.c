#include<stdio.h>

int main()

{ printf("Yuvraj Dahiya\n");

int a,b, sum= 0,c;

printf("Enter any number to check whether it is Armstrong or not = ");
 scanf("%d",&a );

b=a;

while(a!=0)

{

c=a%10;

a=a/10;

sum=sum+(a*a*a);

}

if(sum==b)

printf ("%d is an Armstrong number", b) ;

else printf("%d is not an Armstrong number",b); return 0;

}
