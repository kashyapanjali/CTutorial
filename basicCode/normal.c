#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,r1,r2,d;
    
    printf("enter the value of a, b,&c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        r1=-b+(sqrt(d))/(2*a);
        r2=-b-(sqrt(d))/(2*a);
        printf("roots are real and unequal is %d %d",r1,r2);
    }
    else if(d==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("root is real and equal is %d %d",r1,r2);
    }
    else {
        int real_part=-b/(2*a);
        int img_part=(sqrt(-d))/(2*a);
        printf("real part is %d and imaginary part is %d",real_part,img_part);
    }
    return 0;
}