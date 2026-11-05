#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        // a er value input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
     
      int mn=INT_MAX;
      //logical operation
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                mn= min(a[i]%k,mn);
            }
        }
        //print minimum 
        if (mn == INT_MAX)
        {
            cout << -1<<endl;
        }
        else
        {
            cout << mn<<endl;
        }
    }
    return 0;
}