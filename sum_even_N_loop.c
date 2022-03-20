#include<stdio.h>
// Write a C program to find sum of all even numbers between 1 to n.
{
int main()	
int a=1,n,sum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
// printf("Even numbers 1-%d = ",n);
while(a<=n){
      
    if(a%2==0){
        
        printf("%d, ",a);
      
    sum+=a;
    }
    a++;
}
// for(a=1;a<=n;a++){
//     if(a%2==0){
//         printf("%d, ",a);
//         sum+=a;
//     }
// }
    printf("sum = %2d",sum);
return 0;
}
