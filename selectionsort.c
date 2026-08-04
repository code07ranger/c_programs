#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
     printf("unsorted array is: ");
     for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
    for(int i=0;i<n-1;i++){// for no of passes
        int min=INT_MAX;
        int minidx=-1;
            for(int j=i;j<=n-1;j++){
                 if(arr[j]<min){// for finding minimum element
            min=arr[j];
            minidx=j;// for printing minimum element index
          }
        }
        // swapping
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    printf("sorted array is: ");
     for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}