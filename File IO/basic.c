#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Newtext.txt", "r");
    if (fptr == NULL){
        printf("file doesn't exists\n");
    }
    else {
        fclose(fptr);
    }
}