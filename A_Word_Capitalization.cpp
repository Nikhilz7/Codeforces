#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    // if (s[0] != 'A' && s[0] != 'Z')
    //     s[0] -= 32;
    cout << s;
    return 0;
}