#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%s",str);     // only the first word will be considered
    // scanf("%[^\n]s",str);  //worse method to take input of entire sentance
    gets(str);              // entire sentence will be considered
    printf("Your input was : %s",str);
    return 0;
}