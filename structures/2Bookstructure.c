#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int pages; 
        float price;
    } a,b,c;

    a.pages = 100;
    a.price = 411.5;
    strcpy(a.name , "secret seven");

    b.pages = 200;
    b.price = 211.5;
    strcpy(b.name , "famous five");

    c.pages = 100;
    c.price = 411.5;
    strcpy(c.name , "super six");

    printf("%d\n",a.pages);
    printf("%f\n",a.price);
    printf("%s",c.name);
    return 0;
}                      
