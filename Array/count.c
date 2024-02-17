#include<stdio.h>
int countodd(int arr[],int n);
int sumofeven(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf("%d\n",countodd(arr,7));
    printf("%d\n",sumofeven(arr,7));
    return 0;
}
int countodd(int arr[],int n){
    int count=0,sum;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        count++;
        }
}

return count;
}
int sumofeven(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        sum=sum+arr[i];
    }
    return sum;
}