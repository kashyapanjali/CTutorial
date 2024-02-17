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
    for(int i=0;i<n-1;i++){
        int flag=0;  //false condition
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;  //true condition
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("\nafter sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
    
}