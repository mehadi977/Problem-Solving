// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '7')
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Lucky" << endl;
    else
        cout << "Not Lucky" << endl;

    return 0;
}
