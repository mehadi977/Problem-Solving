#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int all_watter=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            all_watter+=a[i];
        }
        int min_bottle=ceil(all_watter/(double)x);
        cout<<min_bottle << endl;
    }

    return 0;
}