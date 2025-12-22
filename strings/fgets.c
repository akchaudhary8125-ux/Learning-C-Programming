#include<stdio.h>

int main(){
    char str[100];
    printf("Enter your name:");
    fgets(str,100,stdin);
    printf("Your name is:%s\n",str);

    return 0;
}
