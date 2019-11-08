#include<iostream>    //include basic library
using namespace std; 


 int factorial(unsigned int n)    //function to return int type data ie factorial 
{ 
	if (n == 0)     //base case
	return 1; 
	return n * factorial(n - 1);    //recursive call
} 


int main()    //main function
{ 
	int num = 5;    //any arbitrary example
	cout << "Factorial of " << num << " is " << factorial(num) << endl;     //printing the OUTPUT
	return 0; 
} 
//end of code
//~By: AMRIT OHRI
