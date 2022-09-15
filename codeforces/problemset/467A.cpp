#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;


    int result = 0;
    while (n--) {
        int p, q;

        cin >> p >> q;

        if (q-p > 1) {
            result++;
        }

    }

    cout << result;
}









