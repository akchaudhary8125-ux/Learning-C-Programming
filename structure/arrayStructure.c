#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} st;

int main(){
    st ece[100];
    ece[0].roll=1665;
    ece[0].cgpa=9.2;
    strcpy(ece[0].name, "Aman");

    printf("Name = %s\n", ece[0].name);
    return 0;

    
}