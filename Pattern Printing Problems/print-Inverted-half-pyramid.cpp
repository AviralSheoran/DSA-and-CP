#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ! To print inverted half pyramid

    //     * * * * *
    //     * * * *
    //     * * *
    //     * *
    //     *

    int n;
    cin >> n;
    cout << endl;

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*"
                 << " " << flush;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}