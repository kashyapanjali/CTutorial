#include<stdio.h>
int main(){
    int arr[30],mid,high,low,n,key;
    printf("enter how many element you want");
    scanf("%d",&n);
    printf("array is");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nenter your key you want to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key){
            printf("%dis present at location %d\n",key,mid+1);
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     if(low>high){
            printf("element is not found");
        }
  return 0;
    
}