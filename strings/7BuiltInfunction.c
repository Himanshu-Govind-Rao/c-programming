#include<stdio.h>
#include<string.h>
int main(){ 
    // ---> for length of string
    char* str = "Himanshu";
    int x = strlen(str);
    printf("%d\n",x);

    // ---> to copy a string
    char s1[12] = "Raghav Garg";
    char s2[12];
    strcpy(s2,s1);
    printf("%s\n",s2);

    // ---> to concatenate two string
    char h1[30] = "Himanshu";
    char h2[] = " Govind Rao";
    strcat(h1,h2);
    printf("%s\n",h1);

    return 0;
}
