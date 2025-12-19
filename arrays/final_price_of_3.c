#include<stdio.h>
#define tax 0.15

int main() {
    float price[3];
    printf("Enter 3 prices:");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);

    float final_price1 =price[0]+ (price[0]*tax);
    float final_price2 =price[1]+ (price[1]*tax);
    float final_price3 =price[2]+ (price[2]*tax);

    printf("Final price of 1: %2f\n", final_price1);
    printf("Final price of 2: %2f\n", final_price2);
    printf("Final price of 3: %2f\n", final_price3);

    return 0;
}