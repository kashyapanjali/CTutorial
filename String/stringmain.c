#include<stdio.h>
#include<string.h>
// void printname(char arr[]);
// int main(){
//    char name[50];
//    printf("enter the name\n");
//    scanf("%s",name);
//    printf("Name is %s",name);
// }
// void printname(char arr[]){
//     for(int i=0;i<arr[i]!='\0';i++){
//        printf("%c",arr[i]);
//     }
// }
// int main(){
//  char name[20];
//  gets(name);
//  puts(name);
//  return 0;
// }
int countstring(char arr[]);
void printstring(char arr[]);
int main(){
    char name[50];
    fgets(name,50,stdin);
    printf("Your name is length is %d",countstring(name));
    return 0;
}
int countstring(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
       count++;
    } return count-1;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}