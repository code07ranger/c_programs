#include<stdio.h>
int factorial(int x){
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*i;
    }
   return a;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
      int r;
    printf("enter the number: ");
    scanf("%d",&r);
    int nfact=factorial(n);
    int nrfact=factorial(n-r);
    int npr=nfact/nrfact;
    printf("%d",npr);
    return 0;
}