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
        string s;
        cin >> s;
        // cout << s << endl;
        int cnt_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt_1++;
            }
        }
        int total_cont = 0;
        // int cnt = 0; //by my aprose
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                // cnt = cnt + (cnt_1 - 1); //my
                total_cont += cnt_1 - 1;
                // cnt = 0;
            }
            else if (s[i] == '0')
            {
                // cnt = cnt + (cnt_1 + 1); //my
                total_cont += cnt_1 + 1;
                // cnt = 0;
            }
        }
        cout << total_cont << endl;
    }

    return 0;
}