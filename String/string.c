#include<stdio.h>
// #include<string.h>
// int main(){
//     char name[]="Anjali";
//     int length=strlen(name);
//     printf("Name is:%d",length);
//     return 0;
// }
int countlength(char name[]);
int main(){
    char name[100];

    fgets(name,100,stdin);
    printf("name is %d",countlength(name));
    return 0;

}
int countlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
         count++;
    }
    
    return count-1;
}