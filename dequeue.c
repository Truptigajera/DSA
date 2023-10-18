 //de queue
#include<stdio.h>
#define n 5
int a[n] ,f=-1 ,r=-1;
int display(){
    if(f<0){
        printf("array if empty...");
    }
    else{
        for(int i=f;i<=r;i++)
        printf("%d ",a[i]);
    }
    
}
int lastinsert(){
    int data;
    printf("Enter Data:");
    scanf("%d",&data);
     if(r>n-1){
        printf("\nfull queue\n");
     
    }
    else{
    if(f<0){
        f=r=0;
        a[r]=data;
    }
    else{
        r++;
          a[r]=data;
     }
   
    }
    
}
int firstdelet(){
    if(f<0){
        printf("empty....");
    }
    else{
    if(f==r){
        f=-1;
        r=-1;
    }
    else{
        f++;
    }
    printf("\nvalue deleted:");
}
}
int firstinsert(){
int data;
    printf("Enter Data:");
    scanf("%d",&data);
     if(f==0){
        printf("\nsorry! Do not Enter\n");
     
    }
    else{
    if(f<0){
        f=r=0;
        a[f]=data;
    }
    else{
        f--;
          a[f]=data;
     }
   
    }

}
int lastdelet(){
 if(f<0){
        printf("empty....");
    }
    else{
    if(f==r){
        f=-1;
        r=-1;
    }
    else{
        r--;
    }
    printf("\nvalue deleted:");
}

}
int main(){
    int ch;
    printf("1.display\n");
    printf("2.lastinsert\n");
    printf("3.firstdelet\n");
    printf("4.first insert\n");
    printf("5.last delet\n");
    printf("0.The End");
    do{
        printf("Enter your ch:");
        scanf("%d",&ch);
        int data;
        switch(ch){

        case 1:
        display();
        break;

        case 2:
        lastinsert();
        break;

        case 3:
        firstdelet();
        break;

        case 4:
        firstinsert();
        break;

        case 5:
        lastdelet();
        break;

        case 0:
        printf("close");
        break;

        default:
        printf("wrong ch:");
        break;
        }

    }
    while(ch!=0);
    



}