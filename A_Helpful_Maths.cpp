#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> nums;
    for (char x : s)
    {
        if (x != '+')
            nums.push_back((int)x - 48);
    }
    sort(nums.begin(), nums.end());
    for (auto i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1)
            cout << nums[i];
        else
            cout << nums[i] << "+";
    }
    return 0;
}