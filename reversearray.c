//wap to copy the contents of one array into another in the reverse order
#include<stdio.h>
int main(){
    int arr[5]={4,1,5,3,74};
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i]=arr[4-i];
        printf("%d ",brr[i]);
    }
    return 0;
}