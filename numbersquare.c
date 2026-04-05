#include<stdio.h>
int main(){
    // int n,m;
    // printf("enter no of rows: ");
    // scanf("%d",&n);
    //   printf("enter no of column: ");
    // scanf("%d",&m);
    for(int i=1;i<=4;i++) //outer loop ::no of rows/lines -> denote by i
    {
         for(int j=1;j<=4;j++)//inner loop ::no of column-> denote by j
    {
    printf("%d",j);
    }
    printf("\n");
}
    return 0;
}