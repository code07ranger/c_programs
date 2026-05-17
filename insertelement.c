#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college";
    // 2nd index pe k ko insert krna hai
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='k';
    printf("%s",str);

}