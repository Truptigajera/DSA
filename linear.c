#include<stdio.h>
#include<stdlib.h>
#define n 10

int linearSearch(int a[],  int x) 
{  
 
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == x)  
        return i+1;  
    }  
  return -1;  
}  
int main()
{
     int a[n],i,element;
     for(i=0; i<n; i++)
	  a[i] = rand()%99+1;

	printf("Array is: \n");
     for(i=0; i<n; i++)
	printf("%d ",a[i]);
     
     printf("\nEnter Serach Element: ");
	scanf("%d",&element);
	int m = linearSearch(a,element);
	if (m == -1)
		printf("Element is not found");
	else
		printf("Element is found at %d position ",m);	

}