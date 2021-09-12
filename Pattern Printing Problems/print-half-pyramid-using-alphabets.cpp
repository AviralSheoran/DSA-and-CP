#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ! TO Print half pyramid using alphabets

    /*     
A
B B
C C C
D D D D
E E E E E 

*/

    char input, alphabet = 'A';
    cin >> input;
    cout << endl;

    for (int i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << alphabet << " " << flush;
        }
        ++alphabet;
        cout << endl;
    }

    cout << endl;
    return 0;
}