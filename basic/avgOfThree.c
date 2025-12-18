#include<stdio.h>

int main(){
    int a,b,c;
    float avg;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    // printf("Enter three numbers:");
    // scanf("%d %d %d", &a, &b, &c);
    avg = (a + b+c)/3;
    printf("The average of %d, %d and %d is %f\n", a,b,c,avg);
    return 0;
}