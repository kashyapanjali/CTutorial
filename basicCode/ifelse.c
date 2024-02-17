// WAP to find largest number.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is large\n");
        } else{
            printf("c is large\n");
        }
    }
    else{
        if(b>c){
            printf("b is large\n");
        }
        else{
            printf("c is large\n");
        }
    }
    return 0;
}