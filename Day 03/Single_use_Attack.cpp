#include <bits/stdc++.h>
using namespace std;
void mn()
{
    int h, x, y;
    cin >> h >> x >> y;
    if (h == y)
    {
        cout << 1;
    }
    else
    {
        cout << 1 + ceil((h - y) / (double)x);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mn();
        cout << endl;
    }
    return 0;
}