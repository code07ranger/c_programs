#include<stdio.h>
#include<string.h>
// globally defining typedef function for its use
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon ;
void change(pokemon*p){
    (*p).attack=90;
    (*p).hp=80;
    (*p).speed=100;
    (*p).tier='S';
    strcpy((*p).name,"RAICHU");
    return ;
}
int main(){
    pokemon pikachu;
    pikachu.attack=70;
    pikachu.hp=60;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"PIKACHU");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    change(&pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}