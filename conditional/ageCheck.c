#include<stdio.h>

int main(){
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    if (age >= 18){
        printf("You are an adult.\n");
        printf("You can vote.\n");
        printf("You can drive.\n");
    }
    else if ( age>=13 && age<18) {
        printf("You are a teenager.\n");
    }

    else {
        printf("Child");
    }    
    return 0;
}