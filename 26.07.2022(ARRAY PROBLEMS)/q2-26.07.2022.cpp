#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr,n,i;
      printf("enter the number of elements: ");
      scanf("%d",&n);
      ptr=(int*)malloc(n * sizeof(int));
      printf("\nEnter %d Numbers:\n",n);
      for(i=0;i<n;i++)
      {
            scanf("%d",ptr+i);
      }
      printf("\nREVERSED ARRAY:\n\n");
      for(i=n-1;i>=0;i--)
      {
            printf(" %d",*(ptr+i));
      }
      return 0;
}
