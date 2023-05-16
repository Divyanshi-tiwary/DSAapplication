#include <stdio.h>
#include<stdlib.h>

void nextGreatest(int arr[], int size)
{

  int max=  arr[size-1];
 
  arr[size-1] = -1;
 
  for(int i = size-2; i >= 0; i--)
  {
    
    int temp = arr[i];
 

    arr[i] = max;
 
    
    if(max < temp)
       max = temp;
  }
}
 
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
 

int main()
{
  	int size;
	printf("enter size of an array: ");
	scanf("%d",&size);
    int arr[100],*p=arr;
    p=(int *)malloc(size *sizeof(int));
	for(int i=0;i<size;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
  nextGreatest (arr, size);
  printf ("The modified array is: \n");
  printArray (arr, size);
  return (0);
}
