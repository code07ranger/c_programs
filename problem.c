//wap to change value of all odd indexed elements to its second multiple
//increment all even indexed value by 10.
#include<stdio.h>
int main(){
    int arr[40],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int k=0;k<n;k++){
        if(k%2==0){
            arr[k]=arr[k]+10;
     }
     else{
        arr[k]=arr[k]*2;
     }
    }
    for(int j=0;j<n;j++){
    printf("%d ",arr[j]);
    }
    return 0;
}