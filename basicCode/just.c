// WAP on something.
#include<stdio.h>
#include<math.h>
// int main(){
    // int n;
    // printf("enter the number");
    // scanf("%d",&n);
    // if(n>0){
    //     printf("natural number\n");
    // }
    // else{
    //     printf("not natural number\n");
    // }
    // int n;
    // printf("enter the number\n");
    // scanf("%d",&n);
    // int sum=0;
    // for(int i=n;i>=0;i--){
    //     printf("%d\n",i);
    //     sum=sum+i;
    // }printf("sum is %d\n",sum);
    // int n;
    // printf("enter the number\n");
    // scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     if(i==3){
    //         continue;
    //     }else if(i==7){
    //         break;
    //     }
        
    //     printf("%d\n",n*i);
    // }/
    // int n;
    // printf("enter the number\n");
    // scanf("%d",&n);
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=n;j++){
    //         printf(" *");
    //     }printf("\n");
    // }
//     int n=9;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//     if(i%2!=0&&i%i==0&&i%1==0){
//         printf("%d\n",i);
//     }
    
// }
// void printHello();
// void printGoodbye();
// int main(){
//      printHello();
//      printGoodbye();
//     return 0;
// }

// void printHello(){
//     printf("Hello\n");
// }
//  void printGoodbye(){
//     printf("Goodbye\n");
//  }
// void Namaste();
// void Banjour();
// int main(){
//     char c;

//     printf("enter i for indian\n");
//      printf("enter f for french\n");
//     scanf("%c\n",&c);
//     Namaste();
//     Banjour();
//     return 0;
// }
// void Namaste(){
//     printf("Banjour\n");
// }
// void Banjour(){
//     printf("Namaste\n");
// }
// int SquareArea(int side);
// int RectanglePerimeter(int l ,int b);
// int main(){
//     int side, a,b;
//     printf("enter the side\n");
//     scanf("%d",&side);
//     printf("enter the lenght and bredth\n");
//     scanf("%d %d",&a,&b);
//     SquareArea(side);
//     RectanglePerimeter(a,b);
//     printf("Area of square is %d\n",SquareArea(side));
//     printf("Perimeter of Rectangle is %d",RectanglePerimeter(a,b));
//     return 0;
// }
// int SquareArea(int side){
// return side*side;
// }
// int RectanglePerimeter(int l ,int b){
//   return 2*(l+b);
//
// recursion code
// void printHW( int count);
// int main(){
//     printHW(6);
// }
// void printHW( int count){
//     if (count==0){
//         return ;
//     }
//   printf("Hello world\n");
//   printHW(count-1);  
// }
// int sum(int n);
// int main(){
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     sum(n);
//     printf("sum is %d\n",sum(n));
//     return 0;
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//    else 
//    {
//     return sum(n-1)+n;
//   }
// }
// int fact(int n);
// int main(){
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("factorial of number is %d",fact(n));
//     return 0;
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return fact(n-1)*n;
//     }
// }
// int fib(int n);
// int main(){
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("fibonacci series is %d",fib(n));
//      return 0;
// }
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }/
// int fib(int n);
// int main(){
//     printf("%d\n",fib(8));
//     return 0;
// }
// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int sum(int n);
// int main(){
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("sum of digit is %d",sum(n));
// }
// int sum(int n){
//      int sum=0,rem;
//     while(n>0){
//         rem=n%10;
//         sum=sum+rem;
//         n=n/10;
//     }printf("sum is %d",sum);
//     return (sum);
// }
int squareroot(int n);
int main(){
    double n,result;
    printf("enter the number\n");
    scanf("%lf",&n);
    result=sqrt(n);
    printf("squareroot of %.2lf=%.2lf",n,sqrt(n));
    return 0;
}
int squareroot(int n){
    return 0;
}
#include<stdio.h>
int area(int side );
int main(){
   int side;
   printf("enter the side\n");
   scanf("%d",&side);
   area(side);
   return 0;
}
int area(int side){
    int area=side*side;
    printf("area is %d",area);
}