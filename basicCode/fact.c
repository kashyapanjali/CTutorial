#include<stdio.h>
int sum(int n);
int fact(int n);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    sum(n);
    printf("Sum is %d\n",sum(n));
    fact(n);
    printf("factorial is %d",fact(n));
    return 0;

}
int sum(int n){
  if(n==0){
    return 0;
  }
    int sumN=sum(n-1)+n;
    return sumN;
}
int fact(int n){
    if(n==0){
        return 1;
    }
 int factN=fact(n-1)*n;
 return factN;
}
int fib(int n);
int main(){
    int n,i=0,c;
    printf("enter th number\n");
    scanf("%d",&n);
    printf("fibonacci series are");
    for(c=1;c<=n;c++){
        printf("%d",fib(i));
        i++;
    }
 }
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else
        return (fib(n-1)+fib(n-2));
}