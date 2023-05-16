#include <stdio.h>
#include<stdlib.h>


int main()
{   int n;
    int a[100],*p=a; 
    
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int *)malloc(n *sizeof(int));
    printf("Enter the array elements :");
                      
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
             if(*(p+i)<*(p+j))
            {
                temp=*(p+i);
                        *(p+i)=*(p+j);
                        *(p+j)=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[1]);  
    printf("\n");
    printf("The second largest element is %d",a[n-2]);      
    return 0;
}
