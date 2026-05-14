#include<stdio.h>
int main(){
    int arr[8]={1,4,5,8,9,12,13,16};
    int x;
    printf("enter the target number: ");
    scanf("%d",&x);
    int i=0;
    int j=7;
    while (i<j){
            if(arr[i]+arr[j]==x){
                printf("The numbers are(%d,%d)\n",arr[i],arr[j]);
                break;
            }
              if(arr[i]+arr[j]>x){
                j--;
            }
              if(arr[i]+arr[j]<x){
                i++;
            }

        }
    return 0;
}