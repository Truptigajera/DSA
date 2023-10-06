#include<stdio.h>
int main(){
    int a[5],b[5],c[10],i,j;
     
    for(i=0;i<5;i++){
       printf("Enter val a[%d]:",i);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
     
    for(j=0;j<5;j++){
        printf("Eneter val b[%d]:",j);
        scanf("%d",&b[j]);
         c[i]=b[j];
        i++;
    }
    printf("merge value is C:\n");
    for(i=0;i<10;i++){
       
        printf("%d ",c[i]);
    }
}