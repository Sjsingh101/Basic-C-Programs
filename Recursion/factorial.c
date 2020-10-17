#include<stdio.h>
int fact(int); //function declaration
main()
{
   int x,z;
   printf("Enter the value of x:\n"); //value upto which you want to find factorial
   scanf("%d",&x);   
   z=fact(x);  //function call
   printf("The factorial of %d numbers is %d.\n",x,z);
}

//function definition to find factorial
int fact(int a)
{
    int s;
    if(a==1)   //base case
        return(a);
    s=a*fact(a-1);   //recursion
    return(s);
}

