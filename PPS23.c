#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(int h=1;h<=3;h++){
        for(int y=1;y<=4-h;y++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}