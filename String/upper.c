#include<stdio.h>
#include<string.h>
// int main(){
//     char name[35];
//     printf("enter the name\n");
//     scanf("%s",name);
//     strupr(name);
//     puts(name);
//     return 0;
// }
int main(){
    char str[50];
    printf("enter the string name\n");
    scanf("%s",str);
    int i,j;
    int maxcount=0;
    char maxchar;
    for(i=0;i<strlen(str);i++){
    int count=0;
        for(j=0;j<strlen(str);j++){
            if(str[i]==str[j])
            count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxchar=str[i];
        }
    }
    printf("the max occuring character is %c",maxchar);
    strlen(maxchar);
    return 0;
}
