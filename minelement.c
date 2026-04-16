#include<stdio.h>
int main(){
    int arr[20],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int j=0;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("the min element of array is:%d",min);

    return 0;
}