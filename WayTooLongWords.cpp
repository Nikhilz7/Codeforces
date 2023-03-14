// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis

// word
// l10n
// i18n
// p43s

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> ipstrs;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        ipstrs.push_back(temp);
    }
    for (int x = 0; x < ipstrs.size(); x++)
    {
        if (ipstrs[x].length() > 10)
        {
            int num = ipstrs[x].length() - 2;
            string midnum = to_string(num);
            ipstrs[x] = ipstrs[x][0] + midnum + ipstrs[x][ipstrs[x].length() - 1];
        }
        cout << ipstrs[x] << "\n";
    }

    // string words[n];
    // for (int i = 0; i < n; i++)
    //     cin >> words[i];

    // for (int i = 0; i < n; i++)
    // {
    //     if (words[i].length() > 10)
    //     {
    //         int num = words[i].length() - 2;
    //         string midnum = to_string(num);
    //         char last = words[i][words[i].length() - 1];
    //         words[i] = words[i][0] + midnum + last;
    //         cout << words[i] << "\n";
    //     }
    //     else
    //         cout << words[i] << "\n";
    // }

    // for (int i = 0; i < n; i++)
    //     cout << words[i] << "\n";

    return 0;
}
// C1@fors
/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
 */
/*

    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;

 */