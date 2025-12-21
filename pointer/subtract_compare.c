#include<stdio.h>

int main(){
    int age = 20;
    int _age = 21;
    int *ptr = &age;
    int *_ptr = &_age;

    int diff = ptr-_ptr;

    printf("%u, %u \n difference =%u\n", ptr, _ptr, diff);
    
    _ptr = &age;
    printf("comparison= %u\n", ptr == _ptr);
    
    return 0; 
}