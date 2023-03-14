#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int res = 0;
    int temp;
    vector<int> arr;
    while (n--)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    for (auto i : arr)
    {
        if (i >= arr[k - 1] && i > 0)
            res++;
    }
    cout << res;
    return 0;
}