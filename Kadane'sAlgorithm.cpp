#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm

int maxSubArraySumDP(int arr[], int n)
{
	int maxSum = arr[0], curSum = arr[0];
	for (int i = 1; i < n; i++)
	{
		curSum = max(arr[i], curSum + arr[i]);
		maxSum = max(curSum, maxSum);
	}
	return maxSum;
}

int main()
{
	int a[] = { -2, -3, -4, -1, -2, 1, 5, -3};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Largest Sum is(DP): " << maxSubArraySumDP(a, n);
	return 0;
}