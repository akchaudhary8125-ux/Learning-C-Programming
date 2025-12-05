#include<stdio.h>

int main() {
    float rad;
    printf("Enter the radius:");
    scanf("%f", &rad);
    float pi = 3.14;
    printf("The area of circle is: %f", pi*rad*rad);
    return 0;
}