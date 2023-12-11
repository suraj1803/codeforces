/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
*/

#include <iostream>
using namespace std;

int main()
{   
    double x;
    cin >> x;
    int y = x;
    if (x == y)
        cout << "int " << x << "\n";
    else 
        cout << "float " << y << " " << x - y << "\n";
    return 0;
}