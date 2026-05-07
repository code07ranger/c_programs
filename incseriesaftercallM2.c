#include<stdio.h>

void series(int n){
    if (n==0) return ;// base case
     series(n-1);//recursive function
     printf("%d\n",n);//after call code
    return ;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    series(n);
    return 0;
}