#include <iostream>
using namespace std;
#define ull unsigned long long
#define ll long long

int main()
{
    int n;    
    cin >> n;

    ull max = 0;
    while (n--)
    {
        ull i;
        cin >> i;
        if (i > max)
            max = i;
    }

    cout << max << "\n";

    return 0;
}