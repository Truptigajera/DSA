#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
  struct node* prev;
};
struct node* head = NULL;

void insertEND(int val){
    struct node* ptr = head;
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = val;
    temp -> next = NULL;
    temp->prev =NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr -> next !=NULL){
        ptr = ptr ->next;
    }
    ptr -> next = temp;
    temp->prev= ptr;
    return;
} 
  void insertfirst(int val){
         struct node* ptr = head;
         struct node* temp = malloc(sizeof(struct node));
         temp -> data = val;
         temp -> next = NULL;
         temp -> prev = NULL;
          if(head == NULL){
           head = temp;
            return;
    } 
         temp -> next = ptr;
          head = temp;
        return;
        
    } 
    void insertmid(int val ,  int position){
        struct node* ptr = head;
        struct node* temp = malloc(sizeof(struct node));
        temp -> data = val;
       
        while(ptr -> data !=position){
        ptr = ptr ->next;
    }
        temp->next = ptr->next;
        ptr -> next ->prev = temp;
        ptr->next = temp;
        temp -> prev = ptr;
        return;

    }
      void deleteEND(){
        struct node * ptr = head;
        struct node * prev;
        if(head == NULL){

            printf("list already empty.....");
            return;
        }
        else if(head -> next == NULL){
            head = NULL;
            free(ptr);
            return;
        }
        while(ptr -> next !=NULL){
            prev = ptr;
            ptr = ptr -> next;
        }        
        prev -> next = NULL;
        free(ptr);
        return;
    }
          void deletefirst(){
        struct node * ptr = head;
       
        if(head == NULL){

            printf("list already empty.....");
            return;
        }
        else if(head -> next == NULL){
            head = NULL;
            free(ptr);
            return;
        }

        ptr -> next -> prev = NULL;
        head = ptr->next;
        free(ptr);
        return;
    }
     void deletemid(int position){
          struct node * ptr = head;
          struct node * p; 
          while(ptr -> data !=position){
            p = ptr;
            ptr = ptr -> next;
        }        
         p -> next = ptr -> next ;
         ptr -> next -> prev = p;
        free(ptr);
        return;

    }

  void display(){
        struct node * ptr = head;
        if(head == NULL){
                printf("list is empty \n");
        }
        else{
            while(ptr !=NULL){
                printf("%d ", ptr ->data);
                ptr = ptr -> next;
            }
        }
        printf("\n");
    }

    int main(){
        int ch;
        printf("1.insertEND\n");
        printf("2.insetfirst\n");
        printf("3.display\n");
        printf("4.insertmid\n");
        printf("5.deleteEND\n");
        printf("6.deleterfirst\n");
        printf("7.deletemid\n");
            do{
        printf("\nenter your choice:");
        scanf("%d",&ch);
        int data , position;
        switch(ch){
            case 1:
              printf("enter data:");
              scanf("%d",&data);
              insertEND(data);
              break;

            case 2:
               printf("enter data:");
              scanf("%d",&data);
              insertfirst(data);
              break;

            case 3:
               display();
               break;

             case 4:
               printf("enter mid:");
               scanf("%d",&data);
               printf("enter your position:");
               scanf("%d",&position);
               insertmid(data,position);
               break;    

            case 5:
              deleteEND();
              break;   

            case 6:
              deletefirst();
              break;  

            case 7:
            printf("enter your position:");
               scanf("%d",&position);

              deletemid(position);
              break;  
    }
            }
             while (ch!=0);   
    }