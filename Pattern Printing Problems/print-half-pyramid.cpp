#include <bits/stdc++.h>
using namespace std;

/* ! Print this Pattern
*
* *
* * *
* * * *
* * * * * 
*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " " << flush;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    return 0;
}