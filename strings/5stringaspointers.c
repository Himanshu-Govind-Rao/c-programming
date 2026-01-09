#include<stdio.h>
#include<string.h>
int main(){ 
    char str[] = "Physics Wallah"  ;
    char* ptr = str;
    *ptr = 'H';
    printf("%s",str);
    return 0;
}
