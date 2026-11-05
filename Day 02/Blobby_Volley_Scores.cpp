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
        int cnt_a = 0, cnt_b = 0;
        char server = 'a';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && server == 'a')
            {
                cnt_a++;
            }
            else if (s[i] == 'B' && server == 'b')
            {
                cnt_b++;
            }
            else if (s[i] == 'B')
            {
                server = 'b';
            }
            else if (s[i] == 'A')
            {
                server = 'a';
            }
        }
        cout << cnt_a << " " << cnt_b << endl;
    }

    return 0;
}