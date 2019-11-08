#include <iostream>
using namespace std;
void selectionsort(int [], int);
void swap(int*, int*);
void getArray(int [], int);
int main()	//Driver code
{
	int arr[] = {-2, 6, 28, 13, 16, 11};
	int n = 6;
	selectionsort(arr, n);
	cout<<"Sorted Array:\n";
	getArray(arr, n);
	return 0;
}
void swap(int *x, int *y)	//Function to swap the elements
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void selectionsort(int arr1[], int sz)	//Selection sort function
{
	int i, j, small;
	for (i = 0; i<sz-1; i++)	//outer loop
	{
		small = i;
		for (j = i+1; j<sz; j++)	//inner loop
		{
			if(arr1[j]<arr1[small])	//compares value at j and small
			{
				small = j;	//if value at j is smaller, index is stored in small
			}
		}
		swap(arr1[i], arr1[small]); 	//swapping the smallest element 
	}
}
void getArray(int A[], int size)	//Function to display the array
{
	for (int i = 0; i<size; i++)
	{
		cout<<A[i]<<' ';
	}
}
