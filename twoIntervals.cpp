/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
*/

#include <iostream>
using namespace std;
#define ull unsigned long long
#define ll long long

int main()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    ll l3 = min(l1, l2);
    ll r3 = max(r1, r2);

    ll l4 = max(l1, l2);
    ll r4 = min(r1, r2);

    if (l4 > r4)
        cout << -1 << "\n";
    else if (l4 >= l3 && r4 <= r3)
        cout << l4 << " " << r4 << "\n";
    else 
        cout << -1 << "\n";

    return 0;
}