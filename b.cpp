#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << i + 1 << "\n";
            break;
        }
    }

    return 0;
}