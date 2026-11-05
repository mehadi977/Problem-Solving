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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int om[n] = {0}, ady[n]={0};
        int cnt_om = 0, cnt_addy = 0;
        // operation for om:
        for (int i = 0; i < n; i++)
        {
            // count om
            if (a[i] != 0)
            {
                cnt_om++;
            }
            else if (a[i] == 0)
            {
                om[i] = cnt_om;
                cnt_om = 0;
                continue;
            }
        }
        om[0] = cnt_om;
        //
        //
        // operation for addy
        for (int i = 0; i < n; i++)
        {
            // count om
            if (b[i] != 0)
            {
                cnt_addy++;
            }
            else if (b[i] == 0)
            {
                ady[i] = cnt_addy;
                cnt_addy = 0;
                continue;
            }
        }
        ady[0] = cnt_addy;
        // final maximum day stuck
        int max_om = *max_element(om, om + n);
        int max_addy = *max_element(ady, ady + n);
   
        // print who win
        if (max_om > max_addy)
        {
            cout << "Om";
        }
        else if (max_om < max_addy)
        {
            cout << "Addy";
        }
        else
        {
            cout << "Draw";
        }
        cout << endl;
    }

    return 0;
}