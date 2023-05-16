//WAP by designing a recursive function to calculate the sum of all even digits of any given integer.
#include<stdio.h>
int SumEvenDigits(int number){
	if (number==0)
	return 0;
	if (number%2==0)
	return number%10+SumEvenDigits(number/10);
	else
	return SumEvenDigits(number/10);
}
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	n=SumEvenDigits(n);
	printf("Number's sum of even digits: %d ",n);
}
