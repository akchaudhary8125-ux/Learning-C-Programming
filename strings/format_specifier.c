#include<stdio.h>

int main(){
    char firstName[50];
    printf("Enter your first name:");
    scanf("%s", firstName);
    printf("Your name is %s\n", firstName);

    char fullName[100];
    printf("Enter your full name:");
    scanf("%s", fullName); // scanf is unable to read strings with spaces
    printf("Your full name is:%s\n", fullName);

   
    return 0;
}