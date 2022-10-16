#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;

    int arr[n];

    // input array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    while(q--) {
        int num;
        cin >> num;

           int index = upper_bound(arr, arr+n, num) - arr;
           int result = (index == n) ? -1 : arr[index];
           cout << result << "\n";

    }

}
