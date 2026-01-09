#include<stdio.h>
#include<string.h>
int main(){
    typedef struct crickter{
        char firstname[20];
        char lastname[20];
        int age;
        int testmatches;
        float average;
    } crickter;

    // 3 cricketers
    crickter arr[3];
    for(int i=0;i<3;i++){
    scanf("%s",arr[i].firstname);
    scanf("%s",arr[i].lastname);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].testmatches);
    scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
    printf("Name:%s %s\n",arr[i].firstname,arr[i].lastname);
    printf("Age:%d\n",arr[i].age);
    printf("Number of matches played:%d\n",arr[i].testmatches);
    printf("Average%f\n",arr[i].average);
    }
    return 0;
}
