#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        
        // floor(log2(n)) + 1 = number of times n can be halved until 0
        int ans = 0, temp = n;
        while (temp > 0)
        {
            ans++;
            temp /= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}