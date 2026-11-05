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
        // operation for om:
        int max_om = 0, cnt_om = 0;
        for (int i = 0; i < n; i++)
        {
            // count om
            if (a[i] != 0)
            {
                cnt_om++;
                max_om = max(max_om, cnt_om);
            }
            else if (a[i] == 0)
            {
                cnt_om = 0;
            }
        }
        // operation for addy
        int max_ady = 0, cnt_ady = 0;
        for (int i = 0; i < n; i++)
        {

            if (b[i] != 0)
            {
                cnt_ady++;
                max_ady = max(max_ady, cnt_ady);
            }
            else if (b[i] == 0)
            {
                cnt_ady = 0;
            }
        }
        // print who win
        if (max_om > max_ady)
        {
            cout << "Om";
        }
        else if (max_om < max_ady)
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