#include<stdio.h>

typedef struct account_info
{
    int accountNo;
    char name[100];

} acc;

int main(){
    acc acc1={123,"Amit"};
    acc acc2={125,"Aman"};
    acc acc3={126,"Aashish"};

    printf("Acc no=%d\n", acc2.accountNo);
    printf("Name=%s\n", acc2.name);
}
