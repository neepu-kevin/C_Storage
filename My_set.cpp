#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*

set的基本操作

输入：
7
add 5
add 3
add 7
query 3 7
del 5
query 3 7
query 1 2

输出：
3
2
0

*/

void solve()
{
    set<int> st;
    int n, t;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> t;
            st.insert(t);
        }
        else if (s == "del")
        {
            cin >> t;
            auto temp = st.find(t);
            if (temp != st.end())
            {
                st.erase(temp);
            }
        }
        else
        {
            int l, r;
            cin >> l >> r;
            auto sl = st.lower_bound(l);
            auto sr = st.upper_bound(r);
            cout << distance(sl, sr) << endl;
        }
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