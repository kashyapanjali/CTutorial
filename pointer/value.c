// WAP to illustrate pointer.
#include<stdio.h>
int main(){
    int num=10;
    int*ptr=&num;
    printf("Address of num=%d\n",&num);
    printf("Value of num=%d\n",num);
    printf("Adress of ptr=%d\n",&ptr);
    printf("Value of ptr=%d\n",ptr);
    printf("Value of pointed by ptr=%d",*ptr);
    return 0;
}