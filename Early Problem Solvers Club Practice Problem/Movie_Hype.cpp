#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
        }
        // int ans;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(max(v[i], v[i + 1]));
        }
        int mn = INT_MAX;
        for (int a : ans)
        {
            mn = min(a, mn);
        }
        cout << mn << endl;
    }

    return 0;
}