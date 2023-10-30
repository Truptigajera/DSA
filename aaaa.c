#include<stdio.h>
#include<stdlib.h>
#define n 10
int linearserch(int a[],int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i+1;}
       
    }
     return -1;
}
int main(){
    int a[n], element, i;
    for(i=0;i<n;i++){
        a[i]=rand()%100+1;
    }
    printf("Array :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter serch element:");
    scanf("%d",&element);

    int m=linearserch(a, element);
    if(m==-1){
        printf("element is not found");
    }
    else{
        printf("serch element %d position:",m);
    }
}