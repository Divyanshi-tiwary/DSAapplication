#include <stdio.h>

int sum(int arr[], int a, int len) 
{

    if(a >= len)
        return 0;
        
    return (arr[a] + sum(arr, a + 1, len));
}


int main()
{
    int arr[100];
    int N, i, sumofarray;
    
    

    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    sumofarray = sum(arr, 0, N);
    printf("Sum of array elements: %d", sumofarray);
    
    return 0;
}



