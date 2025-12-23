#include<stdio.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} st;

int main(){
    st s1= {1665, 9.2, "Aman"};
    printf("Student name: %s Roll no: %d", s1.name, s1.roll);

    return 0;
}