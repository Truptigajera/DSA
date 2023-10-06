#include<stdio.h>
int main(){
    int a[5],i,x,n;
    printf("Enter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //printf("\n");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    x=a[0];
    a[0]=a[n-1];
    a[n-1]=x;
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}
 