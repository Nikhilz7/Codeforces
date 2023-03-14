#include <bits/stdc++.h>
using namespace std;
// aXa square is given to fill inside nXm rectangle
int main()
{
    long long n, m, a, res;
    cin >> n >> m >> a;
    res = ((n / a) + (n % a != 0)) * ((m / a) + (m % a != 0));
    cout << res;
    return 0;
}