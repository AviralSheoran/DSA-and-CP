#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ! To print full pyramid using *

    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *

    int n;
    cin >> n;
    int k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (j >= k)
            {
                cout << "* " << flush;
            }
            else
            {
                cout << "  " << flush;
            }
        }
        k--;
        cout << endl;
    }

    cout << endl;
    return 0;
}