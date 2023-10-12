#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
    int a[20],i,x;

    for(i=0;i<n;i++)
    a[i]=rand()%100+1;
    printf("Array is:");

    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nEnter element to serch:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    if(a[i]==x)
    break;

    if(i<n)
    printf("Element found at index %d:",i);

    else
    printf("Element not found...");
 
}