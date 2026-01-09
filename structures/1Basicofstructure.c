#include<stdio.h>
int main(){
    struct pokemon{  // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    } pikachu , charizard ;

    
    pikachu.attack = 60;
    pikachu.hp = 70;
    pikachu.speed = 85;
    pikachu.tier = 'A';

    printf("%d",pikachu.attack );


    charizard.attack = 120;
    charizard.hp = 80;
    charizard.speed = 90;
    charizard.tier = 'S';

    return 0;
}  
