// program to find remainder of any number

#include<stdio.h>
int main(){
    int a,b,c;
        printf("enter 1st side: ");
        scanf("%d",&a);
        printf("enter 2nd side: ");
        scanf("%d",&b);
        printf("enter 3rd side: ");
        scanf("%d",&c);
           if ((a+b)>c && (b+c)>a && (a+c)>b)
           {
            printf("These are sides of triangle");
           }
           else{
            printf("These are not sides of triangle");
           }
                         
        
     return 0;
}