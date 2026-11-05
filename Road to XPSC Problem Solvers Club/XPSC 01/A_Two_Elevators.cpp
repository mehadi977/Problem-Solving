#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int fst = a - 1;
        int secnd = abs(c - b) + (c - 1);
        if (fst < secnd)
            cout << 1 << endl;
        else if (fst > secnd)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}