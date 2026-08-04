#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    
    for(int i=0;i<9;i++){
        for (int j=0;j<8-i;j++){
        if(arr[j]==0){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
}
 
     printf("array is: ");
     for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}