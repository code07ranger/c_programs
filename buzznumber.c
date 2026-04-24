//wap to find the buzz number inputted by user
//Buzz number is a positive integer that either ends with the digit 7 or divisible by 7
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0 || n%10==7){
        printf("%d is a buzz number",n);
    }
    else{
        printf("%d is not a buzz number",n);
    }
    return 0;
}