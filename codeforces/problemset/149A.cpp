#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k; cin >> k;

    int year[12];

    for (int i = 0; i < 12; i++) {
        cin >> year[i];
    }

    sort(year, year + 12);


    int result = 0;

    for (int i = 11; i >= 0; i--) {
        if (k > 0) {
            k -= year[i];
            result ++;
        }
    }
    if (k > 0) cout << -1;
    else cout << result;
}









