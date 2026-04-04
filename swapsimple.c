#include<stdio.h>
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    int temp=a;
     a=b;
     b=temp;
     printf("the swapped first number:%d\n",a);
     printf("the swapped second number:%d",b);




    return 0;
}