#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0;
    int d = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            a++;
    }

    d = n - a;
    if (a > d)
        cout << "Anton\n";
    else if (d > a)
        cout << "Danik\n";
    else
        cout << "Friendship\n";

    return 0;
}