#include<stdio.h>
// 2 variable swap without 3rd variable 
int main()
{
printf("Yuvraj Dahiya\n");
int a=5,b=7;
printf("before swap a=%d \n",a); 
printf("before swap b=%d \n",b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a=%d \n",a); 
printf("after swap b=%d \n",b) ;
return 0;
}

