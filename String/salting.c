#include<stdio.h>
#include<string.h>
void salting(char password[]);
// int main(){
//  char salt[]="123";
//  char newpass[30];
//  scanf("%s",newpass);
//  strcat(newpass,salt);
//  puts(newpass);
//  return 0;

// }
int main(){
    char password[50];
    scanf("%s",password);
    salting(password);
}
void salting(char password[]){
   char salt[]="123";
   char newpass[200];
   strcpy(newpass,password);
   strcat(newpass,salt);
   puts(newpass);
}