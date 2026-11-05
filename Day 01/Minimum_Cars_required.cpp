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
        double ans = (double)n / 4;
        cout << ceil(ans) << endl;
    }

    return 0;
}