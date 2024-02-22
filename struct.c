#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1. roll=50;
    s1. cgpa=8.5;
    strcpy(s1.name,"Hariom");
    printf("student name is=%s\n",s1.name);
    printf("roll is =%d\n",s1.roll);
    printf("student cgpa=%f",s1.cgpa);
    return 0;
    
}