// WAP to print fib series .
#include<stdio.h>
void main(){
    int n,x,y,z;
    printf("enter the maximum limit number\n");
    scanf("%d",&n);
    x=0;
    y=1;
    z=0;//start from zero
    while(z<=n){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
    }
    getch();
}