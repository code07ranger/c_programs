#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
      int hp;
      int attack;
      int speed;
      char tier;
      char name[15];
    }pokemon;
    pokemon a[2];
    //pokemon 1 data
    a[0].attack=50;
    a[0].hp=100;
    a[0].speed=30;
    a[0].tier='A';
    // a[0].name="pikachu";(will show an error)
    strcpy(a[0].name,"pikachu");

    // pokemon 2 data
    a[1].attack=50;
    a[1].hp=36;
    a[1].speed=70;
    a[1].tier='S';
    strcpy(a[1].name,"charizard");
    for (int i=0;i<=1;i++){
        printf("%s\n",a[i].name);
        printf("%d\n",a[i].speed);
        printf("%d\n",a[i].hp);
        printf("%d\n",a[i].attack);
        printf("%c\n",a[i].tier);
     }
    return 0;
}