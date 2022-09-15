#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double total = n;
    double sum = 0;

    while (n--) {
    int x;
    cin >> x;
    sum += x;
    }
    cout << fixed << setprecision(6) <<sum/total;
}











