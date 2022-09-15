#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    int maxIndex = -1, maxValue = -1;
    int minIndex = -1, minValue = 10000;
    cin >> n;

    for (int i = 0; i<n; i++) {
    int x; cin >> x;
    if (x > maxValue) {
        maxValue = x;
        maxIndex = i;
    }
    if (x <= minValue){
        minValue = x;
        minIndex = i;
    }


    }


    int numberOfSeconds = 0;

    numberOfSeconds += (maxIndex);
    numberOfSeconds += (n-1-minIndex);

    if (maxIndex > minIndex) {
        numberOfSeconds--;
    }


    cout << numberOfSeconds;

}








