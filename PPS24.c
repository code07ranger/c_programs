#include<stdio.h>
int main(){
    int nsp=3;
    int a=1;
    for(int i=1;i<=4;i++){
         for(int h=1;h<=nsp;h++){
            printf("  ");
        }
        for(int k=1;k<=1;k++){
            printf("*");
          }
        for(int w=2;w<=a-1;w++){
            printf("  ");
        }
        if (i==1){
            printf(" ");
        }
        else{
        for(int y=1;y<=1;y++){
            printf(" *");
        }
    }
        nsp--;
        a+=2;
      printf("\n");
    }
   
   for(int j=1;j<=13;j++){
    printf("*");
   }
    return 0;
}