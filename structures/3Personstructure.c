#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        float salary;
        int age;
    } a,b;

    a.salary = 10000;
    a.age = 25;
    strcpy (a.name,"Mahesh");

    b.salary = 13000;
    b.age = 27;
    strcpy (b.name,"Ramesh");

    printf("%s\n",a.name);
    printf("%d",b.age);
    return 0;
}                      
