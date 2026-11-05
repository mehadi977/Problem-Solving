#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        // a er man input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        // b er sob man int max korbo
        for (int i = 0; i < n; i++)
        {
            b[i] = INT_MAX;
        }
        // logical operation
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                b[i] = a[i] - ((a[i] / k) * k);
            }
        }
        int mn = *min_element(b, b + n);
        if (mn == INT_MAX)
        {
            cout << -1;
        }
        else
        {
            cout << mn;
        }

        cout << endl;
    }
    return 0;
}