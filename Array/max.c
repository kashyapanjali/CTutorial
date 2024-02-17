#include<stdio.h>
void max_num(int arr[]);
int main(){
   int arr[]={23,24,45,43,21};
   int max_num=(arr);
   printf("maximum number of the given array is:d",(arr));
}
void max_num(int arr[]){
    int max= -1;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            printf("max number is %d",max);
        }
    }return max;
}
