#include<stdio.h>
 
#define n 10
int bubblesort(int a[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}
int main(){
        int a[]={10,56,20,87,63,32,25,19,2,79};


        bubblesort(a);
        printf("sorted array is:");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
}