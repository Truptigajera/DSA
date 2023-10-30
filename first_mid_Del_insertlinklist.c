//simple link list first insert and first delet = mid delet and insert

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
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
void insertFirst(int val){
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    
    if(head==NULL){
        
       temp->next=NULL;
        return;
    }
     
    temp->next=ptr;
    head=temp;
    return;
}
void deletFirst(){
    
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
     
    head=ptr->next;
    free(ptr);
    return;
}
void insertMid(int val, int position){
     
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
     
    while(ptr->data!=position){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    
    return;
}
void deletMid(int position){
    struct node *ptr=head;
    struct node *prev;
    while(ptr->data!=position){
        prev=ptr;
        ptr=ptr->next;
    }
     
    prev->next=ptr->next;
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
    printf("\n3.deletEnd");
    printf("\n4.insertFirst");
    printf("\n5.deletFirst");
    printf("\n6.insertMid:");
    printf("\n7.deletMid:");
    printf("\n0.The End\n");
    do{
        printf("Enter your choice:");
        scanf("%d",&ch);
        int data,position;
        switch(ch){
            case 1:
            display();
            break;

            case 2:
            printf("Enter your data:");
            scanf("%d",&data);
            insertEnd(data);
            break;

            case 3:
            deletEnd();
            break;

            case 4:
            printf("Enter first data");
            scanf("%d",&data);
            insertFirst(data);
            break;

            case 5:
            deletFirst();
            break;

            case 6:
            printf("Enter Mid:");
            scanf("%d",&data);
            printf("Enter position:");
            scanf("%d",&position);
            insertMid(data,position);
            break;

            case 7:
            printf("Enter delet position:");
            scanf("%d",&position);
            deletMid(position);
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