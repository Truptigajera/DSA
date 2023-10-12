#include<stdio.h>
#define n 10
int binaryserch(int a[],int l,int h,int ele){
while(l<=h){
    int mid=(l+h)/2;
    if(a[mid]==ele){
        return mid+1;
    }
    else if(a[mid]<ele){
        l=mid+1;
    }
    else if(a[mid]>ele){
        h=mid-1;
    }
 
}
  return -1; 
}

int main(){

int a[]={8,10,23,35,49,50,62,78,86,99};
int ele=55;

int index = binaryserch(a,0,n-1,ele);
if(index==-1){
    printf("element is not found.\n");
}
else{
    printf("find element position %d",index);
}

}