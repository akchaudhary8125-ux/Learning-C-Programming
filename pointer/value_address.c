#include<stdio.h>

int main(){
    int age = 20;
    int *ptr = &age;
   
// prints the addresses
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

// prints the values at the given addresses
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}