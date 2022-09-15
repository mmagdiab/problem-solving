#include<bits/stdc++.h>
using namespace std;
bool checkYear(string s);
int main()
{
    int y;
    cin >> y;

    for (int i = y+1; ; i++)
    {
        string s = to_string(i);
        if (checkYear(s))
        {
            cout << s;
            return 0;
        }
    }
}


bool checkYear(string s)
{

    int stringLength = s.length();
    set<char> year ;
    for (int i = 0; i < stringLength ; i++)
    {
        year.insert(s[i]);
    }

    if (year.size() == 4)
    {
        return true;
    }
    return false;
}







