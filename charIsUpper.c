#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z') {
        printf("Upper Case letter\n");
    }
    else if (ch>='a' && ch<='z') {
        printf("Lower Case letter\n");
    }
    else {
        printf("Not a english letter\n");
    }
    return 0;
}