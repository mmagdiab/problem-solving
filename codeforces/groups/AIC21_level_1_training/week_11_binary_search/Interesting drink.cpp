#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // input array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int q; cin >> q;
    while (q--) {
            int num;
            cin >> num;
        int index = upper_bound(arr, arr+n, num) - arr;
        int result = (index == n) ? 0 : index;
        cout << index << "\n";
    }

}










