#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 0; i < 6; i++)
        {
            if (a[i] == 'W' && a[i + 1] == 'W' && a[i + 2] == 'W')
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}