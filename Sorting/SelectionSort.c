#include<stdio.h>
int main(){
    int arr[20],n,i,j,min;
    printf("enter how many element you want\n");
    scanf("%d",&n);
    printf("enter array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nbefore sorted array is:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
       
    }
printf("\nafter sorted arrray is:");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}