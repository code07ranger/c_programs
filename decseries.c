#include<stdio.h>
void series(int n){
    if (n==0) return ;
    printf("%d\n",n);
    series(n-1);
    return ;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    series(n);
    return 0;
}