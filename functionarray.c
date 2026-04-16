//swap two numbers using array function
#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int a[2]={2,9};
    printf("%d %d\n",a[0],a[1]);
    fun(a);
    printf("%d %d\n",a[0],a[1]);
    return 0;
}