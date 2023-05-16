#include<stdio.h>
#include<conio.h>
main()
{
int a[50], b[50], c[50],m,n,k,l,i,j,x;
printf("\nEnter the no. of terms of the polynomial:");
scanf("%d", &m);
printf("\nEnter the exponents and coefficients:");
for (i=0;i<2*m;i++)
scanf("%d", &a[i]);
printf("\nFirst polynomial is:");
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
printf("\n\n\nEnter the no. of terms of 2nd polynomial:");
scanf("%d", &n);
printf("\nEnter the exponents and co-efficients:");
for(j=0;j<2*n;j++)
scanf("%d", &b[j]);
printf("\nSecond polynomial is:");
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
c[k+1]=a[i+1]+b[j+1];
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
printf("\nsum of the two polynomials is:");
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
getch();
return 0;
}
