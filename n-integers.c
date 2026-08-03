//wap that takes n number of integers as input and display them using
//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number whatever you want: ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    int*p=ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
     for(int i=1;i<=n;i++){
        printf("%d ",(*p));
        p++;
    }
    return 0;
}