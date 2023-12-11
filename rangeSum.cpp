/*
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
*/

#include <iostream>
#include <string.h>

#define ull unsigned long long
#define ll long long
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--) 
    {
        ull l, r;
        cin >> l >> r;
        ull maximum = max(l , r);
        ull minimum = min(l, r);
        ull sum = (maximum - minimum + 1) * (maximum + minimum) / 2;
        cout << sum << "\n";
    }

    return 0;
}