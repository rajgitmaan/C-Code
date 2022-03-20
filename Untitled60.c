#include <stdio.h>
int main()
{
int *p,**q,i;
int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
p = val;
q = &p;

printf("Yuvraj Dahiya\n");
for(int i = 0; i<7; i++)
{
 printf("val[%d]: value is %d\n", i, **q);
 p++;
}
return 0;
}
