#include<stdio.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} st;

int main(){
    st s1= {1665, 9.2, "Aman"};    
    st *ptr = &s1;
    printf("Student roll = %d\n", (*ptr).roll);

    printf("Student -> roll = %d\n", ptr->roll);
    printf("Student -> name = %s\n", ptr->name);
    printf("Student -> cgpa = %2f\n", ptr->cgpa);

}