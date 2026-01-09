#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
    int day;
    int month;
    int year; 
} date;
date a,b; 
// a --> 5/12/1999
// b --> 13/07/2005
a.day = 5;
a.month = 12;
a.year = 1999;

b.day = 13;
b.month = 07;
b.year = 2005;

bool flag = true;
if(a.day!=b.day) flag = false;
if(a.month!=b.month) flag = false;
if(a.year!=b.year) flag = false;

if(flag == true) printf("the dates are same");
else printf("the dates are not same"); 
    return 0;
}
