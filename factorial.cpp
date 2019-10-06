#include<stdio.h>


//function to calculate the factorial
long long factorial(long long x)
{
	long long product=1;
	if(x==0)
		return product;
	for(int i=1; i<=x; i++)
	{
		product *= i;
	}
	return product;
}


int main()
{
	long long a;
	long long p;
	printf("Enter the number you want the factorial of: ");
	scanf("%lld",&a);
	p = factorial(a);
	printf("\nThe factorial is: %lld",p);
	return 0;
}	
		
		
