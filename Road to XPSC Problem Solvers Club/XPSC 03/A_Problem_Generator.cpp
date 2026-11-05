#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // vector<char> v(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        //     // cout << v[i] << " ";
        // }
        string s;
        cin >> s;

        vector<int> freq(7);
        for (char c : s)
        {
            // int pos = c - 'A';
            freq[c - 'A']++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     int pos = s[i] - 'A';
        //     freq[pos]++;
        // }
        int ans = 0;
        // for (int i = 0; i < 26; i++)
        // {
        //     if (freq[i])
        //     {
        //         /* code */
        //     }

        // }
        for (int i = 0; i < 7; i++)
        {
            if (freq[i] < m)
            {
                ans += (m - freq[i]);
            }
        }

        // if (freq[0] < m)
        //     ans += m - freq[0];
        // if (freq[1] < m)
        //     ans += m - freq[1];
        // if (freq[2] < m)
        //     ans += m - freq[2];
        // if (freq[3] < m)
        //     ans += m - freq[3];
        // if (freq[4] < m)
        //     ans += m - freq[4];
        // if (freq[5] < m)
        //     ans += m - freq[5];
        // if (freq[6] < m)
        //     ans += m - freq[6];

        cout << ans << endl;
    }

    return 0;
}