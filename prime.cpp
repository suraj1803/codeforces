#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n + 1, true);
    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i <= n; i++)  
    {
        if (arr[i])
        {
            for (int j = i * 2; j <= n; j+=i)
                arr[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) 
    {
        if (arr[i])
            cout << i << " ";
    }
    cout << endl;

    return 0;
}