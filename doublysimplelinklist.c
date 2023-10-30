//doubly simple link list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    return;
}
void deletEnd(){
    struct node *ptr=head;
    struct node *prev;
    if(head==NULL){
        printf("List alredy empty...");
        return;
    }
    else if(head->next==NULL){
        head=NULL;
        free(ptr);
        return;
    }
    while(ptr->next!=NULL){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    return;
}
void display(){
    struct node *ptr=head;
    if(head==NULL){
        printf("List is empty...\n");
    }
    else{
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}
int main(){
    int ch;
    printf("1.display");
    printf("\n2.insertEnd");
     printf("\n0.The End\n");
    do{
        printf("Enter your choice:");
        scanf("%d",&ch);
        int data;
        switch(ch){
            case 1:
            display();
            break;

            case 2:
            printf("Enter your data:");
            scanf("%d",&data);
            insertEnd(data);
            break;

             case 0:
            printf("close...");
            break;

            default:
            printf("wrong...");
            break;

        }
    }
    while(ch!=0);

}