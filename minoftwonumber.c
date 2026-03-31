#include<stdio.h>
int minimum(int a,int b){
   int min=a;
   if (b<a) min=b;
   return min;
}
int main(){
    int a;
    printf("enter first number: ");
    scanf("%d",&a);
    int b;
    printf("enter second number: ");
    scanf("%d",&b);
    int min=minimum(a,b);
    printf("the minimum number is:%d",min);
    return 0;
}
