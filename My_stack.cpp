#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*

输入：
(25+x)*(a*(a+b+b)@
输出：
NO

输入：
2*(x+y)/(1-x)@
输出：
YES

*/

void solve()
{
    stack<char> sk;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '(')
        {
            sk.push('(');
        }
        else if (c == ')')
        {
            if (!sk.empty())
            {
                sk.pop();
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (!sk.empty())
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}