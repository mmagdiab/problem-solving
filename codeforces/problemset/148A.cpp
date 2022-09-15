#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    bool arr[d] = {0};


    for (int i = 1;i*k <= d;i++) {
        int index = (i*k) - 1;
        arr[index] = true;
    }

    for (int i = 1;i*l <= d;i++) {
        int index = (i*l) - 1;
        arr[index] = true;
    }

    for (int i = 1;i*m <= d;i++) {
        int index = (i*m) - 1;
        arr[index] = true;
    }

    for (int i = 1;i*n <= d;i++) {
        int index = (i*n) - 1;
        arr[index] = true;
    }


    int result = 0;
    for (int i = 0;i < d;i++) {
        if (arr[i] == false)
            result++;
    }

    cout << d-result;
}













