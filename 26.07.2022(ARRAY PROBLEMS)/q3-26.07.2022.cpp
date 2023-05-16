#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],*p=arr,n,count=0,pos;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
  
    
    int num;
    printf("\nEnter the element you want to search:");
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==num)
        {
            count++;
            pos=j;

        }
    }
    if(count==0)
    {
        printf("Element not found.");
    }
    else
    {
        printf("The element is found in the array in the %d position",pos+1);
    }
}
