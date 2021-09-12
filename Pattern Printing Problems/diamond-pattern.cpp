#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ! To make diamond pattern

    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *

    int n;
    cout << "Enter the no. : " << flush;
    cin >> n;

    int k = n - 1;

    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < k; j++)
            cout << " ";

        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << endl;
        k--;
    }

    // Repeat again in reverse order
    k = 0;

    // run loop (parent loop)
    // till number of rows
    for (int i = n; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < k; j++)
            cout << " ";

        // Print i stars
        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << endl;
        k++;
    }

    cout << endl;
    return 0;
}