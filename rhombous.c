#include<stdio.h>
int main(){
    int n;
    printf("enter no of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //responsible for printing spaces before stars
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        //responsible forprinting star
        for(int k=1;k<=n;k++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}