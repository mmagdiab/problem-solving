#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    int arr[n];
    int arr2[m];

    // input array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr, arr+n);


    for (int i = 0; i < m; i++) {
        int index = upper_bound(arr, arr+n, arr2[i]) - arr;
        int result = (index - 1 == n) ? 0 : index - 1;
        cout << index << " ";

    }






}










