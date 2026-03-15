#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*

洛谷P1996 约瑟夫问题
输入：
10 3
输出：
3 6 9 2 7 1 8 5 10 4

*/

void solve()
{
    queue<int> qe;
    int n, m, cnt = 0, temp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        qe.push(i);
    }
    while (!qe.empty())
    {
        temp = qe.front();
        qe.pop();
        cnt++;
        if (cnt == m)
        {
            cout << temp << " ";
            cnt = 0;
        }
        else
        {
            qe.push(temp);
        }
    }
    cout << endl;
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