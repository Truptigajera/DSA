//selection sort
#include<stdio.h>

#define n 10
int selectsort(int a[]){

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(a[i]>a[j]){
                int x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
}
int main(){
        int a[]={10,56,20,87,63,32,25,19,2,79};


        selectsort(a);
        printf("sorted array is:");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
}