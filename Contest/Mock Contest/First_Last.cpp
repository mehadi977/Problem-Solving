// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    map<ll, pair<ll, ll>> mp;
    for (int i = 1; i <= n; i++)
    {
        ll val = a[i];
        if (!mp.count(val))
            mp[val] = {i, i};
        else
            mp[val].second = i;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
    return 0;
}
