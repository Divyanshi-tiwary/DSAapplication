#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],*ptr=a,n ,count=0 ,m ,temp ,p1 ,p2 ,pos1 ,pos2 ;
    printf("ENter the number of elements:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the element[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is:-");
    printf("[");
    for(int j=0;j<n;j++)
    {
        printf("%d ,",a[j]);
    }
    printf("]\n");
    for(int m=0;m<n;m++)
    {
        for(int j=m+1;j<n;j++)
        {
            if(a[m]<a[j])
            {
                temp=a[m];
                a[m]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted array is:");
    printf("[");
    for(int k=0;k<n;k++)
    {
        printf("%d ,",a[k]);
    }
    printf("]\n\n");
    printf("\nENter the starting number:");
    scanf("%d",&p1);
    printf("\nEnter the second number:");
    scanf("%d",&p2);
    printf("The array is:\n\n");
    printf("\n[");
    for(int g=0;g<n;g++)
    {
        if(a[g]==p1)
        {
            pos1=g;
        }
    }
    for(int o=0;o<n;o++)
    {
        if(a[o]==p2)
        {
            pos2=o;
        }
    }
    for(int q=pos1;q<=pos2;q++)
    {
        printf("%d ,",a[q]);
    }
    printf("]\n");
    return 0;

}
