#include<stdio.h>
int main()

{
int i, size;
printf("Yuvraj Dahiya\n"); 
printf("Enter array length: "); 
scanf("%d",&size); 
printf("Enter the Years: "); 
int arr[size];
for(i=0; i<size; i++)
{	
scanf("%d", &arr[i]);
}

for(i=0; i<size; i++)
{
if((arr[i]%4==0) && (arr[i]%100!=0))  
printf("\n%d is a leap year",arr[i]); 

else if(arr[i]%400 == 0) 
printf("\n%d is a leap year", arr[i]); 

else
printf("\n%d is not leap year", arr[i]);

}
return 0;
}
