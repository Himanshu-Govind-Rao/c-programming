#include<stdio.h>
#include<stdlib.h>
int main(){
//     int x = 9;
//     int* ptr = NULL;
//     printf("%p",ptr);
int* ptr = (int*)calloc(10,sizeof(int));
int* p = ptr;
ptr--;
free(p);
    return 0;
}
