// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n), odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }

  
    sort(odd.begin(), odd.end(), greater<ll>());
    sort(even.begin(), even.end(), greater<ll>());
    cout << odd[0] + even[0];

    return 0;
}
