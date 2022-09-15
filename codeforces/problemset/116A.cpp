#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int numInTrain = 0;
    int peak = 0;
    while (n) {
        int a,b;
        cin >> a >> b;
        numInTrain -= a;
        numInTrain += b;

        if (numInTrain > peak)
            peak = numInTrain;

        n--;
    }
    cout << peak;
}




