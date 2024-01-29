#include<stdio.h>
#include<string.h>
int main(){
    char s1[100] = "Tanvir ";
    char s2[100] = "Ahmed";
    char s3[100];
    int res;

    // Length Finding
    printf("******Length Finding*********\n");
    int size = strlen(s1);
    int size2 = strlen(s2);

    
    printf("The Length is: %d\n", size);
    printf("The Length is: %d\n", size2);

    // Compaing
    printf("*********Comparing*********\n");
    
    res = strcmp(s1, s2);
    if(res == 0){
        printf("Strings are equaal.\n");
    }else{
        printf("Strings aren't equaal.\n");
    }

    // Concatination
    printf("*********Concatination*********\n");
    printf("My name is: %s\n", strcat(s1,s2));
    
    // Copy
    printf("*********Copy*********\n");

    strcpy(s3, s2);
    printf("Copy: %s\n", s3);
}