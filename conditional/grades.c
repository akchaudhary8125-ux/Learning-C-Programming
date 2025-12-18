// WAP to give grades to a Student

#include<stdio.h>

int main(){
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100){

        if (marks >= 90 && marks <=100) {
            printf("You got A+\n");
        }
        else if (marks >=70 && marks < 90) {
            printf("You got A\n");
        }
        else if (marks >= 30 && marks < 70) {
            printf("You got B\n");
        }
        else if (marks <30) {
            printf("You got C\n");
        }
    }
    else {
        printf("Enter valid marks\n");
    }
}