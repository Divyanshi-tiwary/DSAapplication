#include<stdio.h> 
#include<stdlib.h>
void multipliedarray(int arr1[], int n) 
{ 
    if (n <= 1) 
      return; 
    int E1 = arr1[0]; 
    arr1[0] = arr1[0] * arr1[1]; 
    for (int i=1; i<n-1; i++) 
    { 
        int E2 = arr1[i]; 
        arr1[i] = E1 * arr1[i+1]; 
        E1 = E2; 
    } 
    arr1[n-1] =E1 * arr1[n-1]; 
    } 
int main() 
{ 
    int n;
	printf("enter size of an array: ");
	scanf("%d",&n);
    int arr1[100],*p=arr1;
    p=(int *)malloc(n *sizeof(int));
	for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
	int i = 0; 
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		{
			printf("%d  ", arr1[i]);
		}
	printf("\n");

	printf("The new array is: \n");	
    multipliedarray(arr1, n); 
    for (int i=0; i<n; i++) 
    printf("%d ", arr1[i]); 
    return 0; 
} 

