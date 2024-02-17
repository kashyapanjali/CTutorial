#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,k=0;
    printf("enter the string\n");
    gets(s);
    for(i=0;s[i];i++){
        s[i]=s[i+k];
        if(s[i]==' '||s[i]=='\t'){
            k++;
            i--;
        }
    }
    printf("string after removing all spaces:\n");
    printf("%s",s);
    return 0;
}