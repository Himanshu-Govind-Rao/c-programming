#include<stdio.h>
int main(){
    // FILE *ptr = fopen("Himanshu.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    //      printf("%s",str);


    // --- Creating a file ---
    FILE* ptr = fopen("CW.txt","w");
    char str[] = "Placement lagegi yahi se";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}