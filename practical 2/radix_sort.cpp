// C++ program to implement radix sort
#include <bits/stdc++.h>
using namespace std;
// counting sort implementation
void count_sort(int arr[], int n, int pos)
{
    // we declare a count array and initialize the array by
    // 0
    int count[10] = {0};
    // we count the frequency of each distinct digit at
    // given place for every element in the original array
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    // we perform prefix sum and update the count array
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    // we store our answer in the ans array
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--count[(arr[i] / pos) % 10]] = arr[i];
    }
    // here we copy the contents of ans array to our
    // original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
// function to implement radix sort
void radix_sort(int arr[], int n)
{
    // max_element() is a c++ stl function to find the
    // maximum element from an array
    int k = *max_element(arr, arr + n);
    for (int pos = 1; (k / pos) > 0; pos *= 10)
    {
        count_sort(arr, n, pos);
    }
}
// driver code
int main()
{
    int arr[] = {6, 210, 300, 600, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    radix_sort(arr, n);
    // displaying the result
    cout << "Array after performing radix sort : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
