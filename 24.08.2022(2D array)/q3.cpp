#include<stdio.h>
int main()
{
int a[50], b[10], c[10],m,n,k,l,i,j,x;
printf("\n\tEnter the no. of terms of the 1st polynomial:");
scanf("%d", &m);
printf("\n\tEnter the exponent and coefficients:");
for (i=0;i<2*m;i++)
scanf("%d", &a[i]);
printf("\n\tFirst polynomial is:");
l=0;
if(a[l+1]==1)
printf("x^%d", a[l]);
else
printf("%dx^%d", a[l+1],a[l]);
l+=2;
while (l<i)
{
printf("+%dx^%d", a[l+1],a[l]);
l+=2;
}
printf("\n\n\n\tEnter the no. of terms of 2nd polynomial:");
scanf("%d", &n);
printf("\n\tEnter the exponent and co-efficients:");
for(j=0;j<2*n;j++)
scanf("%d", &b[j]);
printf("\n\tSecond polynomial is:");
l=0;
if(b[l+1]==1)
printf("x^%d", b[l]);
else
printf("%dx^%d",b[l+1],b[l]);
l+=2;
while (l<2*n)
{
printf("+%dx^%d", b[l+1],b[l]);
l+=2;
}
i=0;
j=0;
k=0;
while (m>0 && n>0)
{
if (a[i]==b[j])
{
c[k+1]=a[i+1]*b[j+1];
c[k]=a[i];
m--;
n--;
i+=2;
j+=2;
}
else if (a[i]>b[j])
{
c[k+1]=a[i+1];
c[k]=a[i];
m--;
i+=2;
}
else
{
c[k+1]=b[j+1];
c[k]=b[j];
n--;
j+=2;
}
k+=2;
}
while (m>0)
{
c[k+1]=a[i+1];
c[k]=a[i];
k+=2;
i+=2;
m--;
}
while (n>0)
{
c[k+1]=b[j+1];
c[k]=b[j];
k+=2;
j+=2;
n--;
}

l=0;
if (c[l+1]==1)
printf("x^%d", c[l]);
else
printf("%dx^%d", c[l+1],c[l]);
l+=2;
while (l<k)
{
if (c[l+1]==1)
printf("+x^%d", c[l]);
else
printf("+%dx^%d", c[l+1], c[l]);
l+=2;
}
return 0;
}
