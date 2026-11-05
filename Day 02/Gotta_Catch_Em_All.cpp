#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, cost = 0;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cost += min(a[i] * x, y);
        }
        cout << cost << endl;
    }

    return 0;
}