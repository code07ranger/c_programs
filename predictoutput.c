#include<stdio.h>
struct book{
    char name[50];
    char author[25];
    int callno;
};
void display(struct book *);// function prototyping

int main(){
    struct book b1={"let us c","YPK",101};
    display(&b1);
    return 0;
   
}
 void display(struct book *b){
    printf("%s %s %d",b->name,b->author,b->callno);
 }