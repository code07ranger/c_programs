//find total no of pairs in the array whose sum is equal to given value x
#include<stdio.h>
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int pairs=0;
    int x=12;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(a[i]+a[j]==x){
                pairs++;
                printf("the pairs are:(%d %d)\n",a[i],a[j]);
            }
        }
    }
    printf("total pairs: %d",pairs);
    return 0;
}