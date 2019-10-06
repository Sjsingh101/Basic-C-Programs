#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    // make two array lft and right
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    // not k = 0 IMMP LINE  
    int k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i = i + 1;
        }
        else
        {
            arr[k] = R[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j = j + 1;
        k = k + 1;
    }
}

void mergesort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}