#include<stdio.h>

int main(){

{
	printf("Yuvraj Dahiya\n");
    int a[10],i,s=0;
    float avg;
    printf("enter 10 values");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
for(i=0;i<10;i++)
{
    s=s+a[i];

}
printf("sum is %d",s);
avg=s/10;
printf("\naverage is %f",avg);
}
return 0;
}
