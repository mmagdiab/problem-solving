#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n ;
    cin >> n;



    int numberOfLuckyDigits = 0;
    int length = n.length();
    for (int i = 0; i < length; i++)
    {
        if (n[i] == '7' || n[i] == '4')
        {
            numberOfLuckyDigits++;
        }
    }
     if (numberOfLuckyDigits == 0) {
        cout << "NO";
        return 0;
    }

    while (numberOfLuckyDigits > 0)
    {
        if (numberOfLuckyDigits % 10 == 4 || numberOfLuckyDigits % 10 == 7)
        {
            numberOfLuckyDigits /= 10;
        }
        else
        {
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";
}





