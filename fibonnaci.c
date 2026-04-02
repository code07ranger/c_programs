//print the nth fibonacci number
// fibonacci series :1 1 2 3 5 8 13 21 34 55..........
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for( int i=1;i<=n-2;i++)
    // n-2 is liye kiy bwz loop ko 1 1 se chalana hai
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth fibonacci term is: %d",n,sum);
    return 0;
}