include<stdio.h> *Imports the stdio header file for standard input and output*

int main() **
{
	int a[50],n,i,j,temp;  *Declaring integar variable and an array*
	printf("Enter the size of array: "); *Asks for the size of array*
	scanf("%d",&n);                      *Inputs the size*
	printf("Enter the array elements: "); *Asks for entering the array elements*
  
  for(i=0;i<n;++i)                     *Loop to take number of inputs equal to the size of array*
  {
		scanf("%d",&a[i]); 
  }
  
  for(i=1;i<n;++i)                    *Runs passes 1 less than the number of elements in array*
  {
		for(j=0;j<(n-i);++j)              *Runs through the elements of the array* 
    {
			if(a[j]>a[j+1])                 *Checks if the latter number is larger than the former*
			{                               *Swaps the two numbers*
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
    }
  }                                   *Sorts the array in decending order*
  
  printf("\nArray after sorting: ");  *Prints "Array after sorting in a new line"
  
  for(i=0;i<n;++i)                    *Prints the sorted array*
  {
		printf("%d ",a[i]);               
  }
  
  return 0;                           *returns a placeholder integer because function was declared returning an int above*
}
