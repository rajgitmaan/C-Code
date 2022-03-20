#include<stdio.h>
int main()
{
printf("\tyuvraj dahiya \n\n");
printf("*******Diamond Patter********\n");
int num, i, j, value;
printf("Enter number of rows\n");
scanf("%d", &num);
value =num- 1;
for (j = 1; j <= num; j++)
{

for (i= 1; i <= value; i++)
printf(" ");
value--;
for (i = 1; i <= 2 * j - 1; i++)
printf("*");
printf("\n");
}
value = 1;
for (j = 1; j <= num - 1; j++) 
{
for (i = 1; i <= value; i++)
printf(" ");  
value++;
for (i = 1 ; i <= 2 *(num - j)- 1; i++)
printf("*");
printf ("\n");
}
return 0;
}


