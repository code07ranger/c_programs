#include<stdio.h>
int factorial(int n){
    if (n==1) return 1;//base condition(used to stop the recursion)
    int recans=n*factorial(n-1);//recursive relation
    return recans;
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("the factorial of %d is %d",n,fact);
    return 0;
}