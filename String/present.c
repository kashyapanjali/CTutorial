#include<stdio.h>
#include<string.h>
void present_character(char name[],char ch);
int main(){
    char name[20]="Anjali Kashyap";
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    present_character(name,ch);
}
void present_character(char name[],char ch){
   for(int i=0;name[i]!='\0';i++){
      if(name[i]==ch){
        printf("character is present\n");
        return 0;
      }
   } 
   printf("character is not present");
}