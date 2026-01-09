#include<stdio.h>    //structures are pass by values..
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp = 70;
    p.attack = 60;
    p.speed = 110;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 80;
    pikachu.attack = 70;
    pikachu.speed = 120;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d",pikachu.speed);
    change (pikachu);
    // fun(pikachu);
    return 0;
}