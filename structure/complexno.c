#include <stdio.h>

typedef struct complexno
{
    int real;
    int img;
} comp;

int main(){
    comp num1 ={5,9};
    comp* ptr = &num1;
    printf("Real part = %d\n", ptr->real);
    printf("Img part = %d\n", ptr->img);
    return 0;
}