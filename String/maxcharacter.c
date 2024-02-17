#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str[10];
    printf("enter the string name\n");
    scanf("%s",str);
    int count=0,maxcount=0;
    char maxchar;
    for(i=0;i<strlen(str);i++){
        count=0;
        for(j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            }
            if(maxcount<count){
                maxcount=count;
                maxchar=str[i];
            }
        }
    }
    printf("the max occuring character is %c",maxchar);
    return 0;
}