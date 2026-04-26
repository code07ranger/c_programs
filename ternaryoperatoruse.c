// use of ternary operator
#include<stdio.h>
int main(){
    int x;
    printf("enter 3-digit number: ");
    scanf("%d",&x);
    // using ternary operator
    // exp1? exp2: exp3;

    (x>99 &&x<1000)? printf("It is a 3-digit number") : printf("It is not a 3-digit number");
    return 0;

}