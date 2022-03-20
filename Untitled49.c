#include <stdio.h>

int main()

{

int arr[5]={1,3,5,7,9};

arr[5]=6;

arr[6]=8;

printf("Yuvraj Dahiya\n");

printf("\n arr[0]=%d Adress: %u", arr[0],&arr[1]);
printf("\n arr[0]=%d Adress: %u", arr[1],&arr[3]);
printf("\n arr[0]=%d Adress: %u", arr[2],&arr[5]); 
printf("\n arr[0]=%d Adress: %u", arr[3],&arr[7]);
printf("\n arr[0]=%d Adress: %u", arr[4],&arr[9]);
printf("\n arr[0]=%d Adress: %u", arr[5],&arr[6]);
printf("\n arr[0]=%d Adress: %u", arr[6],&arr[8]); 

return 0;

}

