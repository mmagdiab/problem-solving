#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Brute force solution

    int k, n, w;
    cin >> k >> n >> w;

    int amountToPay = 0;
    for (int i = 1; i<= w; i++) {
    amountToPay += (i*k);
    }

    if (amountToPay > n)
        cout << amountToPay - n;
    else
        cout << 0;
}


