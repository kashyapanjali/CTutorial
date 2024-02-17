#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen( "test.txt","r");
    int ch;
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fclose(fptr);
    return 0;
}