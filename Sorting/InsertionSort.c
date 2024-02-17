#include<stdio.h>
int main(){
    int arr[20],n;
    printf("enter how many element you take:");
    scanf("%d",&n);
    printf("Array element is:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before sorted Array element is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
   for(int i=1;i<=n-1;i++){
    int d=i;
    while(d>0&&arr[d-1]>arr[d]){
        int t=arr[d];
        arr[d]=arr[d-1];
        arr[d-1]=t;
        d--;
    }
   }
   printf("\nAfter sorted Array element is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}