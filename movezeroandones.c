//wap to move zeros to left side of array
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zeros=0;
        for(int i=0;i<n;i++){
        if(arr[i]==0) zeros++;
    }
    for(int i=0;i<zeros;i++){
        arr[i]=0;
    }
    for(int i=zeros;i<n;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}