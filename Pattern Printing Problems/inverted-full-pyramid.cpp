#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ! To print inverted full pyramid

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    int n;
    cout << "Enter the no. : " << flush;
    cin >> n;
    int k = n - 1;

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < k; j++)
            cout << " " << flush;

        for (int j = 1; j <= i; j++)
            cout << "* " << flush;

        cout << endl;
        k++;
    }

    cout << endl;
    return 0;
}