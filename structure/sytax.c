#include <stdio.h>
#include<string.h>

//user defined datatype
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} st;

int main(){
    st s1 ;
    s1.roll=1660;
    s1.cgpa=9.2;
    strcpy(s1.name, "Amit");

    st s2;
    s2.roll = 1670;
    s2.cgpa = 8.9;
    strcpy(s2.name, "Aman");

    st s3;
    s3.roll = 1680;
    s3.cgpa = 8.7;
    strcpy(s3.name, "Aashish");

    printf("name=%s\n",s2.name);
    printf("roll no=%d\n",s2.roll);
    printf("student cgpa=%2f\n",s2.cgpa);

    return 0;
}