#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        char gan = 'c';
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d && gan == 'c')
            {
                cnt++;
                gan = 'l';
            }
            else if (a[i] <= d && gan == 'l')
            {
                cnt++;
                gan = 'c';
            }
        }
        cout << cnt << endl;
    }
    return 0;
}