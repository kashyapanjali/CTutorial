#include<stdio.h>
int main(){
    char *ch;
    printf("%c",*ch);
    scanf("%c",&ch);
    *ch='A';
    while(*ch<='Z')
    {
        printf("%c\n",*ch);
        *ch+=1;
    }
    return 0;
}