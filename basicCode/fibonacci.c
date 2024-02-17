// WAP to print fibonacci series.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms\n");
    scanf("%d",n);
    int t1=0,t2=1;
    int nextterm=0;
    for(int i=3;i<=n;i++){
        printf("%d",i);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
return 0;
}