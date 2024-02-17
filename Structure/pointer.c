#include<stdio.h>
struct student{
    int rollno;
};
int main(){
    struct student s1;
    s1.rollno=21;
    printf("%d",s1.rollno);
    struct student *ptr=&s1;
    printf("%d\n",(*ptr).rollno);
    printf("%d",ptr->rollno);
    return 0;
}