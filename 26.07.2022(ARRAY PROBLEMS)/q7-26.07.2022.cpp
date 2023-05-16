#include <stdio.h>
#include <stdlib.h>
void
nonzero (int n, int** a)
{
  int i, j, c = 0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (a[i][j] != 0)
	    c++;
	}
    }
  printf ("Number of non zero elements:%d\n", c);
}

void
leading (int n, int** a)
{
  int i, j, s = 0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (i < j)
	    s += a[i][j];
	}
    }
  printf ("Sum of elements above leading diagonal:%d\n", s);
}

void
minor (int n, int** a)
{
  int i, j;
  printf ("Elements below minor diagonal\n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (i + j > n - 1)
	    printf ("%d\t", a[i][j]);
	  else
	    printf ("\t");
	}
      printf ("\n");
    }
}

void
product (int n, int** a)
{
  int i, j, p = 1;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (i == j || i + j == n - 1)
	    p *= a[i][j];
	}
    }
  printf ("Product of diagonal elements:%d", p);
}

int
main ()
{
  int i, j, n;
  printf ("Enter dimension of matrix\n");
  scanf ("%d", &n);
  int** a;
  a = (int **) malloc (n*sizeof (int*));
  for (i = 0; i < n; i++)
  *(a+i)=(int*)malloc(n*sizeof(int));
  if (a == NULL)
    printf ("Memory not allocated\n");
  else
    {
      printf ("Enter array elements\n");
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    scanf("%d",&a[i][j]);
	}
	printf("Entered array\n");
for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       printf("%d\t",a[i][j]);
       printf("\n");
   }
      nonzero (n, a);
      leading (n, a);
      minor (n, a);
      product (n, a);
      for (i = 0; i < n; i++)
      free(a[i]);
      free (a);
    }
      return 0;
    }
