#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int removeEvenDigits(int n)
{
    char str[32];
    int temp, i;
    // convert integer n into a character string
    // the string is placed in str
    // 10 indicates n base 10
    itoa(n, str, 10);
    temp = 0;
    // reading only alternate digits of the string
    for (i = 0; i < strlen(str); i = i + 2)
    {
        // append str[i] to right side of temp
        // str[i]-'0' converts str[i] to corresponding integer
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    n = removeEvenDigits(n);
    printf("Number after removing alternate digits: %d", n);
}

