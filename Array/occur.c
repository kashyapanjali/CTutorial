#include<stdio.h>
int count(int arr[]);
int main(){
    int arr[7]={2,3,4,5,2,5,5};
    printf("count the number of occurance is %d\n",count(arr));
    
}
int count(int arr[]){
    int freq=0,key=5;
    for(int i=0;i<7;i++){
        if(arr[i]==key){
            freq++;
            
        }
    }return freq;
}