#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p(10, 20);
    pair<int, int> p2 = {30, 40};

    if (p != p2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}