#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // pattern observe krke inner loop ki condition lagagyi hai
        //pattern tha ki ::i+j=n and n me plus 1 bwz of obseving condition
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}