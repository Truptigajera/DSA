#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node *next;
};
int main(){
    struct node a,b,c,d;

    a.data=100;
    a.ch='A';
    a.next=NULL;

    b.data=200;
    b.ch='B';
    b.next=NULL;

    c.data=300;
    c.ch='C';
    c.next=NULL;

    d.data=400;
    d.ch='D';
    d.next=NULL;

   // printf("A:data:%d, char:%c",a.data,a.ch);
   // printf("\nB:data:%d, char:%c",b.data, b.ch);
    
    a.next=&c;
    b.next=&a;
    c.next=&d;
    d.next=&b;

    printf("A:data:%d, char:%c",c.next->data,c.next->ch);
    printf("\nB:data:%d, char:%c",a.next->data,a.next->ch);
    printf("\nC:data:%d, char:%c",b.next->data,b.next->ch);
    printf("\nD:data:%d, char:%c",d.next->data,d.next->ch);
}