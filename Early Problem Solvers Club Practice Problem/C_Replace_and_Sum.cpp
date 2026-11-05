// problem Lint: https://codeforces.com/contest/2193/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1), b(n + 1), c(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        for (int i = 1; i <= n; i++)
            c[i] = max(a[i], b[i]);

        for (int i = n-1; i >=1 ; i--)
            c[i] = max(c[i], c[i + 1]);


        // for (int x : c)
        //     cout << x << " ";
        vector<long long int> presum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            presum[i] = presum[i - 1] + c[i];
        }
        // for (int x : presum)
        //     cout << x << " ";

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << presum[r] - presum[l - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}