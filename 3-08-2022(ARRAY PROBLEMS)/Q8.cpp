#include <stdio.h>  
#include <conio.h>  
  
int lcm ( int n1, int n2) // function definition   
{  
    /* static variabe is iniatialized only once for each function call */     
    static int max = 1;  
    if ( max % n1  == 0 && max % n2 == 0)  
    {  
        return max;  
    }  
    else  
    {  
        max++;  
        lcm( n1, n2);  
        return max;  
    }  
}  
int main()  
{  
    int n1, n2, LCM1; 
    printf (" \n Enter any two positive numbers to get the LCM of: \n ");  
    scanf ("%d %d", &n1, &n2);  
    LCM1 = lcm( n1, n2);
    printf ( " \n LCM of %d and %d is %d. ", n1, n2, LCM1);  
    return 0;  
}  
  

