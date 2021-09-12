#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ! To Print half pyramid using numbers 

* 1
* 1 2
* 1 2 3
* 1 2 3 4
* 1 2 3 4 5 

*/

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " " << flush;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}