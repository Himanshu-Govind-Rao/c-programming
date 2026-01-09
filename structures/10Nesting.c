#include<stdio.h> 
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;

    typedef struct legendarypokemon{
       pokemon normal;
       char ability[10];
    } legendarypokemon ;

    typedef struct godpokemon{
       legendarypokemon legend;
       int specialattack;
    } godpokemon ;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    mewtwo.normal.speed = 195;
    mewtwo.normal.tier = 'S';
    strcpy(mewtwo.normal.name,"Mewtwo");
    return 0;
}