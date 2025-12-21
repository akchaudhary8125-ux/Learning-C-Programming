#include<stdio.h>

int main(){
    int rollno[5];

    int *ptr = &rollno[0];
    for (int i =0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", (ptr + i)); // &rollno[i]
    }

    for (int i =0; i<5; i++){
        printf("%d index =%d\n", i, *(ptr + i));  //can use rollno[i] in place of *(ptr+i)
    }
    return 0;
}