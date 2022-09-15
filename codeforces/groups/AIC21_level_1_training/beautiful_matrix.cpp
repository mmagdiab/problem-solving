#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    // input matrix of size n*n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = 0;

    // loop through each row and count how many times row equal to colum
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            bool isEqual = true;
            for (int elem = 0; elem < n; elem++)
            {
                if (arr[row][elem] != arr[elem][column]) isEqual = false;
            }
            if (isEqual) result++;
        }


    }

    cout << result;
}










