#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;

    int stringLength = s.length();

    int consecutiveSame = 0;

    for (int i = 1; i < stringLength; i++) {
        if (s[i] == s[i-1]) {
            consecutiveSame++;
        }
        else {
            consecutiveSame = 0;
        }

        if (consecutiveSame == 6) {
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";

}








