#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int rollNo;
    float cgpa;
};
int main(){
  struct student s1;
  s1.rollNo=21;
  s1.cgpa=9.89;
  strcpy(s1.name,"Anjali");
  printf("Student name is %s\n",s1.name);
  printf("Student Roll number is %d\n",s1.rollNo);
  printf("Student cgpa is %.2f\n",s1.cgpa);
  return 0;
}