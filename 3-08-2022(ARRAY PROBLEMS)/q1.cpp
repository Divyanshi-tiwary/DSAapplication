#include<stdio.h>

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
 

int main()
{
    int x,y;
    printf("enter the base: ");
    scanf("%d",&x);
    printf("enter to the power: ");
    scanf("%d",&y);
 
    printf("%d", power(x, y));
    return 0;
}
    


