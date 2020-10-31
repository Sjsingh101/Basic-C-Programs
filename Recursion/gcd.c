#include<stdio.h>
int gcd(int,int);   //function declaration
int min;
main()
{
    int x,y;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the value of y:\n");
    scanf("%d",&y);
    min=x>y?y:x;
    printf("The GCD of %d and %d is %d.\n",x,y,gcd(x,y));   //function call
}
int gcd(int a,int b)    //function definition
{
    if(a%min==0&&b%min==0)
    {
        return min;
    }
    min--;
    gcd(a,b);
}
