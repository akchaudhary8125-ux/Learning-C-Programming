#include<stdio.h>

int main() {
    int n;
    int fact;
    printf("Enter number: ");
    scanf("%d", &n);

    fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
        
    }
    printf("The factorial of %d is %d", n, fact);
    return 0;
}