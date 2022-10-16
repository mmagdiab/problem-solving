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

    // 1 2 10 12 15 17

    int low = 0;
    int ans = 1;
    int sum = 0;

    for (int high = 1; high < n; high++)
    {
        while (arr[high] - arr[low] > 5) {
            low++;
        }

        ans = max(ans, high - low + 1);
    }
    cout << ans;
}










