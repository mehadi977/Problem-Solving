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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mn = v[0], mx = v[n - 1];
        if (mn % 2 == mx % 2)
            cout << 0 << endl;
        else
        {
            int i = 0, cnt_mn = 0;
            while (v[i] % 2 != mx % 2)
            {
                i++;
                cnt_mn++;
            }
            int j = n - 1, cnt_mx = 0;
            while (v[j] % 2 != mn % 2)
            {
                j--;
                cnt_mx++;
            }
            cout << min(cnt_mn, cnt_mx)<<endl ;
        }
    }

    return 0;
}