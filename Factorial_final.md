Factorial (using recursive approach)

General Explanatiobn:
Factorial of a non-negative integer, is multiplication of all integers smaller than or equal to n. For example factorial of 6 is 6*5*4*3*2*1 which is 720.

Pseudo Code:

int Factorial(int n)
{ if n is 0 return 1;
  else multiply n with Factorial(n-1);//till n!=0
}

main function
{ take any arbitrary no. and cout its factorial 
 return 0;
 }
