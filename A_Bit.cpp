#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int x = 0;
    while (n--)
    {
        cin >> s;
        if (s.find("++") < s.length())
            x++;
        if (s.find("--") < s.length())
            x--;
    }
    cout << x;
    return 0;
}