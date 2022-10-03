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

    sort(arr, arr+n);


    while(q--) {
        string x;
        cin >> x;
        int num;
        if (x == "binary_search") {
            cin >> num;
            if (binary_search(arr, arr + n, num)) {
                cout << "found\n";
            } else {
                cout << "not found\n";
            }
        }
        else if (x == "lower_bound" ) {
            cin >> num;
            int index = lower_bound(arr, arr+n, num) - arr;
            int result = (index == n) ? -1 : arr[index];
            cout << result << "\n";
        } else {
            cin >> num;
            int index = upper_bound(arr, arr+n, num) - arr;
            int result = (index == n) ? -1 : arr[index];
            cout << result << "\n";
        }
    }

}










