#include<stdio.h>
int main(){
    float x,y,r;
    printf("enter x-divident: ");
    scanf("%f",&x);
    printf("enter y-divisor: ");
    scanf("%f",&y);
    int q=x/y;
    r=x-q*y;
    printf("when %f is divided by %f,the remainder is: %f ",x,y,r);
    return 0;
}