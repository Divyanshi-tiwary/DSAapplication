#include <limits.h> 
#include <stdio.h>
#include <stdlib.h> 
 
int minDist(int arr[], int n, int x, int y)
{
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((x == arr[i] && y == arr[j]
                 || y == arr[i] && x == arr[j])
                && min_dist > abs(i - j)) {
                min_dist = abs(i - j);
            }
        }
    }
    if (min_dist > n) {
        return -1;
    }
    return min_dist;
}
 

int main()
{   int arr[100],*p=arr;
	int n;
	printf("enter size of an array: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
    
	for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int x,y;
    printf("enter lower limit x: ");
    scanf("%d",&x);
    printf("enter upper limit y: ");
    scanf("%d",&y);
 
    printf("Minimum distance between %d and %d is %d\n", x,
           y, minDist(arr, n, x, y));
    return 0;
}
