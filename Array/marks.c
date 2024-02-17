#include<stdio.h>
int main(){
    int marks[10]={23,56,76,45,98,67,34,53,64,12};
    for(int i=0;i<10;i++){
        if(marks[i]<=35){
            printf("%d\n",i); 
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]+1);
    }
    return 0;
}