// WAP to illustrate the use of structure
#include<stdio.h>
#include<string.h>
struct person{
    char name[50];
    int citNo;
    float salary;
}person1;
int main(){
    strcpy(person1.name,"George orwell");
    person1.citNo=1984;
    person1.salary=2500;
    printf("Citizenship No:%d\n",person1.citNo);
    printf("salary:%.2f",person1.salary);
    return 0;
}