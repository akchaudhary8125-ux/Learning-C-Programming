#include<stdio.h>

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int j=n; j>=1; j--){
        sum += j;
        printf("%d\n", j);
    }

    printf("The sum of first %d natural numbers is %d\n", n , sum);
    return 0;
}