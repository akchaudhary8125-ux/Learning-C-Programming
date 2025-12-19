#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr= %u\n", ptr);
    ptr++;
    printf("ptr= %u\n", ptr);
    ptr--;
    printf("ptr= %u\n", ptr);


    float price = 20.00;
    float *ptrr = &price;
    printf("ptr= %u\n", ptrr);
    ptrr++;
    printf("ptr= %u\n", ptrr);
    ptrr--;
    printf("ptr= %u\n", ptrr);


    return 0;

}