#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[15];
    } pokemon ;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 90; 
    a.speed = 75;
    strcpy(a.name,"Blastoise");

    // b.attack = a.attack;
    // b.hp = a.hp; 
    // b.speed = a.hp;
    // strcpy(b.name,a.name);

    b = a ;   //  ---> deepcopy
    b.attack = 200;
    strcpy(b.name,"Venusaur");

    printf("%d\n",a.attack);
    printf("%s",b.name);
    return 0;
}