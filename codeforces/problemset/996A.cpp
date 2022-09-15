#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;


    int numberOfBills = 0;
    while (n) {
        if (n >= 100) n -= 100;
        else if (n >= 20) n -= 20;
        else if (n >= 10) n -= 10;
        else if (n >= 5) n -= 5;
        else if (n >= 1) n -= 1;

        numberOfBills ++;

    }

    cout << numberOfBills;

}









