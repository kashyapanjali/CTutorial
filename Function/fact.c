#include<stdio.h>
int fact(int num);
int main(){
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    fact(num);
    printf("factorial of number is %d",fact(num));
    return 0;
}
int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial=factorial*i;
    }return factorial;
}