#include<stdio.h>
int checkPalindrome(int n)
{
  int temp, remainder, rev=0;
  temp = n;

  while( n!=0 )
  {
     remainder = n% 10;
     rev = rev*10 + remainder;
     n /= 10;
  }

  if ( rev == temp )
  return 0;
  else return 1;
}

int main()
{
  int n;
 printf("Enter the number: ");
  scanf("%d", &n);

  if(checkPalindrome(n) == 0)
  printf("%d is a palindrome number.\n",n);
  else
  printf("%d is not a palindrome number.\n",n);

  return 0;
}
