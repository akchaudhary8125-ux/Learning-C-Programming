// write a program in c to check given character is digit or not
#include<stdio.h>

int main(){
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    printf("%d", (a>='0') && (a<='9'));
    return 0;
}