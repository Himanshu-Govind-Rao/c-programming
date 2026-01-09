#include<stdio.h>  ///code me prblm hai
#include<string.h>
int main(){
    char str[40];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    // puts("The size is:"); // automatically \n bhi de deta hai
    //size
    int size = 0;
    int k = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i = 0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return 0;
}
