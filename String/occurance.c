#include<stdio.h>
#include<string.h>
int count_word(char str[]);
int main(){
    char str[]="anjali";
    int length=count_word(str);
    printf("Maximum Occurance of word by user of given letter is %d\n",length,str);
    return 0;
}
int count_word(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            count++;
        }
    }
    return count;
}