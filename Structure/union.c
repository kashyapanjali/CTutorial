// WAP to illustrate the use of union.
#include<stdio.h>
union un{
    int member1;
    char member2;
    float member3;
};
int main(){
    union un var1;
    var1.member1=15;
    printf("the value of stored in member1=%d",var1.member1);
    return 0;
}