#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool arr[n] = {0};

    int x;


    int p;
    cin >> p;
    while(p--)
    {
        cin >> x;
        arr[x-1] = true;
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        arr[x-1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == false)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
}












