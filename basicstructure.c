// wap to contruct a type of 'book' with name,price and number of pages as its attribute
#include<stdio.h>
#include<string.h>
int main(){
    struct book{// preparing user defined data type
       char name[50];
       int price;
       int  pages;
    }a,b;// declaring variables of structures
    struct book d;// we can also declare structure variables here
    strcpy(a.name,"seven");// copying seven string in a.name string
    a.pages=100;
    a.price=450;
     strcpy(b.name,"potter");
    b.pages=700;
    b.price=5000;
    d.pages=450;
    printf("%d\n",a.pages);
    printf("%d\n",a.price);
    printf("%s\n",a.name);
    printf("%s\n",b.name);
    printf("%d\n",b.pages);
    printf("%d\n",b.price);
    return 0;
}