
#include<stdio.h>

int main(){
    int marks1 = 97;
    int marks2 = 98;
    int marks3 = 89;

    int marks[] = {97, 98, 89};
    printf("%d\n", marks[0]);
    marks[2] = 80;
    printf("%d\n", marks[2]);

    return 0;

}