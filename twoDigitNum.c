#include <stdio.h>

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("%d\n", a > 9 && a < 100);
    return 0;
}