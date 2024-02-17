#include<stdio.h>
int main(){
    int arr[2][2],i,j;
    printf("enter the element of the matrices\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d\n",&arr[i][j]);
        }
    }printf("matrices is\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\n",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}