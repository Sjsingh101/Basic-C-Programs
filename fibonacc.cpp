#include<iostream>

using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
     return n;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n=9,c=0,i; //number of terms is fixed as 9
    for(i=1;i<=n;i++)
     cout<<fib(c++)<<" ";
    getchar();
    return 0;
}
