// wap that tells whether a number is perfect number or not
//perfect number::all divisor sum equalls to number itself
//ex::6=1+2+3
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
     if(n%i==0){
        sum+=i;
     }
    }
    if(sum==n){
        printf("%d is a perfect number",n);
    }
     else{
        printf("%d is not a perfect number",n);
    }
      return 0;

}