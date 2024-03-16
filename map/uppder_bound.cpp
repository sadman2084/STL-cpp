#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; // first int is for index and 2nd is for value
    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({5, 30});
    mp.insert({3, 40});
    auto i = mp.upper_bound(0);
    if (i != mp.end())
    {
        cout << i->second << " " << endl;
    }

    auto it = mp.upper_bound(4);
    if (it != mp.end())
    {
        cout << it->second << " " << endl;
    }
    auto itt = mp.upper_bound(6);
    if (itt != mp.end())
    {
        cout << itt->second << " " << endl;
    }
}