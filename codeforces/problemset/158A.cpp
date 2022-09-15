#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int participants[n];
    for (int i = 0; i < n; i++) {
        cin >> participants[i];
    }

    int numberOfAdvancers = 0;

    int threshold = participants[k-1];

    for (int i = 0; i < n; i++) {
        if (participants[i] >= threshold && participants[i] > 0) {
            numberOfAdvancers++;
        }
        else
        break;
    }

    cout << numberOfAdvancers;
}

