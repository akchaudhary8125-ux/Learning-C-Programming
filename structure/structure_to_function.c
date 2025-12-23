#include<stdio.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} st;

void printInfo(st s1);

int main(){
    st s1 = {1665, 9.2, "Aman"};
    printInfo(s1);
    
    return 0;
}

void printInfo(st s1){
    printf("Student Information\n");
    printf("Student Roll No.: %d\n", s1.roll);
    printf("Student Roll No.: %s\n", s1.name);
    printf("Student Roll No.: %2f\n", s1.cgpa);
}