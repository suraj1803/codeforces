#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y, n;
        cin >> x >> y >> n;

        // k => [0, n] so that k %  x = y
        int count = 0;
        if (n % x < y)
        {
            count = n % x + (x - y);
        } 
        else 
        {
            count = n % x - y; 
        }

        cout << n - count << "\n";
    }

    return 0;
}