#include<stdio.h>

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i=1, j=n; i<=n && j>=1; i++,j--){
        sum += i;
        printf("%d\n", j);
    }

    printf("The sum of first %d natural numbers is %d\n", n , sum);
    return 0;
}