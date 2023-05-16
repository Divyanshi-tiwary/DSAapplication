#include <stdio.h>
 
int main()
{
    static int arr1[20][20], arr2[20][20];
    int i, j, k, temp, m, n;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &arr1[i][j]);
            arr2[i][j] = arr1[i][j];
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	 printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix after arranging rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                if (arr1[i][j] > arr1[i][k])
                {
                    temp = arr1[i][j];
                    arr1[i][j] = arr1[i][k];
                    arr1[i][k] = temp;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
        	printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix after arranging the columns in descending order \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k = i + 1; k < m; ++k)
            {
                if (arr2[i][j] < arr2[k][j])
                {
                    temp= arr2[i][j];
                    arr2[i][j] = arr2[k][j];
                    arr2[k][j] = temp;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", arr2[i][j]);
             }
        printf("\n");
    }
}
