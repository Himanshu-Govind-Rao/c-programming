#include<stdio.h>
#include<stdlib.h>
int main(){
//    int a = sizeof(double) ;
//    printf("%d",a);
int* ptr = (int*)malloc(10*sizeof(int));
printf("%d",*ptr);
    return 0;
} 