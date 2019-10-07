#include<iostream>
#include<math.h>
using namespace std;

int main(){
				int num,i=0,remainder=0;
				int dec=0;
			cout<<"Enter the numbers u wan to input:";
			cin>>num;

			
				

					while(num!=0){
							
						remainder= num%10;
						
						dec= dec + remainder*pow(2,i++);
						num=num/10;
					}
						cout<<"The decimal conversion of the number is:";
						cout<<dec;


					}

