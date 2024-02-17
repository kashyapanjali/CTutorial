#include<stdio.h>
int main() 
{
     int arr[5]={4,7,9,1,3};
   for(int i=0;i<5;i++){
       if (arr[0]<arr[i]){
             arr[0]=arr[i];     
          }  
     }
     printf("maximum number is %d\n",arr[0]);
     return 0;
}