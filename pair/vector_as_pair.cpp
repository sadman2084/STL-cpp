#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({4, 5});
    v.push_back({6, 7});
    sort(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << i->first << " " << i->second << " ";
    }
}
