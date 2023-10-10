 //stack=>lifo
#include<stdio.h>
#define n 5
int a[n],top=-1;
int display(){
    if(top<0){
        printf("array is empty...");
        }
    else{
        for(int i=0;i<=top;i++)
        printf("%d ",a[i]);
    }
}
int insertEnd(int val){
    
    if(top>=n-1){
        printf("stack is overflow\n");
    }
    else{
        top++;
        a[top]=val;
    }
}
int delet(){
    if(top>n-1){
        printf("stack overflow\n");
    }
    else{
        top--;

    }
}
int firstin(int val){
    
    if(top>=n-1){
        printf("stack overflow\n");
    }
    else{
        top++;
        for(int i=top;i>=0;i--){
       a[i]=a[i-1];}
       a[0]=val;
       
    }
}

int firstout(){
   
    
    if(top<0){
        printf("array is empty\n");
    }
    else{
        for(int i=0;i<top;i++){
        a[i]=a[i+1];}
        top--;

    }
}
int main(){
    int ch;
    printf("1.Display\n");
    printf("2.Insert array End:\n");
    printf("3.Delet arra End:\n");
    printf("4.First IN array:\n");
    printf("5.First Out Array:\n");
    printf("0.The End");
    do{
        printf("Enter your choice:");
        scanf("%d",&ch);
        int val;
        switch(ch)
        {
            case 1:
                display();
                break;
            case 2:
                printf("Enter your last array:");
                scanf("%d",&val);
                insertEnd(val);
                break;
            case 3:
                delet();
                break;
            case 4:
                printf("Enter your First array:");
                scanf("%d",&val);
                firstin(val);
                break;
            case 5:                 
                firstout();
                break;
            case 0:
                printf("close ");
                break;
            default:
                printf("your choice is wrong...");
                 break;}
    }
    while(ch!=0);
    return 0;


        }
    