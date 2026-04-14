#include<stdio.h>
int main(){
    int arr[40],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
    printf("%d ",arr[j]);
    }
    return 0;
}