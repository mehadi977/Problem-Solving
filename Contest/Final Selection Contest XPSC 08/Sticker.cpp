// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        // cout<<a[i]<<"";
    }
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        ll val = a[i];
        mp[val] += i;
    }
    for (auto m : mp)
        cout << m.first << " " << m.second << endl;

    return 0;
}
