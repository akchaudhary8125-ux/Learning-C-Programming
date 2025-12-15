#include<stdio.h>

int main () {
    int n;
    int product;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <=10; i++) {
        product = n * i;
        printf("%d * %d = %d\n", n, i, product);
    }
    return 0;

}
