#include<stdio.h>
void max_num(int *a,int *b);
int main(){
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    max_num(&a,&b);
    printf("%d is the max num\n",&a,&b);
    return 0;
}
void max_num(int *a,int *b){
    if(*a>*b){
        printf("a is th max_num\n",*a);
    }
    else{
        printf("b is the max_num\n",*b);
    }
}
