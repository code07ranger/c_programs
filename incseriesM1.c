#include<stdio.h>
void series(int x,int n){
    if (x>n) return ;
    printf("%d\n",x);
    series(x+1,n);
    return ;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    series(1,n);
    return 0;
}