#include<stdio.h>
int main(){
//     int arr[2][2],i,j;
//     printf("enter the matrix of element:\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     printf("the values of  matrix are:\n");
//     for(i=0;i<2;i++){
//      for(j=0;j<2;j++){
//      printf("%d",a[i][j]);
//     printf("\n");
// }
// }
//         printf("\n");
//     }
//     return 0;
// 
int i,j,m,n;
int arr[10][20];
printf("enter the number of rows\n");
scanf("%d",&m);
printf("enter the number of column\n");
scanf("%d",&n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",arr[i][j]);

    }
    printf("\n");
}
return 0;
}