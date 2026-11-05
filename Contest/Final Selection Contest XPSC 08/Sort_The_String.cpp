
// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    // for (auto a : mp)
    //     cout << a.first << " " << a.second << endl;

    vector<pair<int, char>> odd, even;
    for (auto a : mp)
    {
        if (a.second % 2 == 1)
            odd.push_back({a.second, a.first});
        else
            even.push_back({a.second, a.first});
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for (auto a : odd)
    {
        for (int i = 0; i < a.first; i++)
        {
            cout << a.second;
        }
    }

    for (auto a : even)
    {
        for (int i = 0; i < a.first; i++)
        {
            cout << a.second;
        }
    }
    return 0;
}
