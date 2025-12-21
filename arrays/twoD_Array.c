#include<stdio.h>

int main(){
    // 2*3
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 58;
    marks[1][1] = 85;
    marks[1][2] = 86;
    
    printf("%d", marks[1][1]);
    return 0;
}