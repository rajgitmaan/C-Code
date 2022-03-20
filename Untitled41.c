#include <stdio.h>
int main()
{
printf("yuvraj dahiya\n");
int num,value = 1; 
printf("Enter the number of rows:");
scanf("%d", &num);
for (int i = 1; i <= num; i++)
{
for (int j = 1; j <= i; ++j) 
{
printf("%3d", value);
++value;
}
printf("\n");
}
return 0;
}


