#include<stdio.h>
void main(){
//   int arr[5]={3,5,6,8,2};
//   printf("array of element is\n");
//   for(int i=0;i<5;i++){
//   printf("%d\t",arr[i]);
//   }
//   return 0;
// }
int arr[5],i,j,temp;
printf("enter the element of array\n");
for( i=0;i<5;i++){
    scanf("%d\n",&arr[i]);
}
for(i=0;i<5;i++){
    printf("%d\n",arr[i]);
}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){ 
     if(arr[i]<arr[j])
        continue;
     else
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    
    }
}
printf("after sorting the array\n");
for(i=0;i<5;i++)
{
    printf("%d\n",arr[i]);
}
return ;
}