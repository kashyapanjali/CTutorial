#include<stdio.h>
void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
        for(j=0;j<n2;j++){
            R[j]=arr[m+j];
        }
    }
    i=0;
    j=0;
    k=1;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void printArray(int arr[],int size){
int i=0;
for(i=0;i<size;i++){
    printf("%d",arr[i]);
}
}
int main(){
    int arr[]={38,46,21,26,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("given array is\n");
    printf(arr,size);
    mergesort(arr,0,size-1);
    printf("sorted array is\n");
    printf(arr,size);
}