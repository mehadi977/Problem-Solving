#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v(n);
        int cnt = 0;
        bool x = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
            if (v[i] < a)
            {
                if (x == false)
                {
                    cnt++;
                    x = true;
                }
            }
            else if (v[i] > b)
                x = false;
        }
        cout << cnt << endl;
        sort(v.begin(),v.end(),greater<int>());
    }

    return 0;
}