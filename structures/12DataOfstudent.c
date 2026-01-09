#include<stdio.h>    // Some error occured
#include<string.h>
#include<stdbool.h>
typedef struct data{
    char name[30];
    int rollno;
    char Branch[30];
    char course[30];
    int Year;
}data;
    void check(data a,data b){
        int i = 0 , flag = 0;
        if (strcmp(a.course , b.course) == 0){
            printf("Both a & b have same course");
        }
        else printf("Both a & b have different course");
        return;
    }
int main(){
    data a,b;
    strcpy(a.name,"Himanshu");
    strcpy(a.Branch,"B.Tech");
    strcpy(a.course,"CSE");
    a.rollno = 2025021228;
    a.Year = 2025;

    strcpy(a.name,"Harsh");
    strcpy(a.Branch,"B.Tech");
    strcpy(a.course,"CSE");
    a.rollno = 2025021227;
    a.Year = 2025;

    check(a,b);

    return 0;
}