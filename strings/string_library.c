#include<stdio.h>
#include<string.h>

int main(){
    //prints string length
    char name[]="Amit";
    int length = strlen(name);
    printf("Length is:%d\n", length);
    
    
    //copies one string to another
    char oldstr[]="oldstr";
    char newstr[]="newstr";
    strcpy(newstr,oldstr);
    puts(newstr);
    
    
    //concatenation of string
    char firststr[100]="Hello ";
    char secstr[]="World";
    strcat(firststr,secstr);
    puts(firststr);


    //compares two strings, useful for dictionary
    char firstStr[]="Apple";
    char secStr[]="Banana";
    printf("%d\n", strcmp(firstStr,secStr));

    return 0;
}

