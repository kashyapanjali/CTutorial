#include<stdio.h>
int reverse(int arr[],int n);
void printarr(int arr[],int n);
int main(){
    int arr[]={1,2,5,6,7};
    reverse(arr,5);
    printarr(arr,5);
   return 0;
}
int reverse(int arr[],int n){
    for(int i=0;i<=n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }printf("\n");
}
void printarr(int arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
return 0;
}