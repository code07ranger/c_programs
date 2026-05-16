#include<stdio.h>
int main(){
    int arr[5]={1,0,3,5,2};
    int n=5;
     printf("unsorted array is: ");
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
    for(int i=1;i<=n-1;i++){
        // i=1 se intialize kare hai bwz we assume uske aage wala array element sorted hai
        // in this case 1 is already sorted in case of insertion sort
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            // j>=1 condition is used to for not going forward then 0 indexing
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
     printf("sorted array is: ");
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}