// fint sum of series upto n terms
//[1/1!+2/2!+3/3!.......]
#include<stdio.h>
int fac(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
     fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter no of terms: ");
    scanf("%d",&n);
    float an,sum=0;
    float deno;
    for(float i=1;i<=n;i++){
        deno=fac(i);
        an=(i/deno);
        sum =sum+an;
    }
    printf("the required sum is:%f",sum);
    return 0;
}