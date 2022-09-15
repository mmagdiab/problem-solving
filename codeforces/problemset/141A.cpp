#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, p;
    cin >> s1 >> s2 >> p;

    string s = s1 + s2;

    sort(s.begin(), s.end());

    sort(p.begin(), p.end());

    s == p ? cout << "YES" : cout << "NO";


}








