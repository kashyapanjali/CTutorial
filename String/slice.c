#include<stdio.h>
#include<string.h>
void slice_print(char name[],int n,int m);
int main(){
    char name[]="HElloWorld";
    slice_print(name,2,5);
}
void slice_print(char name[],int n,int m){
    char newstr[30];
    int j=0;
    for(int i=n; i<=m;i++,j++){
        newstr[j]=name[i];
    }
    newstr[j]!='\0';
    puts(newstr);
}