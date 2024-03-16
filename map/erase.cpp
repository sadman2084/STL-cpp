#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    mp.erase(1);
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
}