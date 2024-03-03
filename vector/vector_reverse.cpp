// It will reverse all values contained by the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(24);
    v.push_back(16);
    v.push_back(43);
    v.push_back(33);
    // case 1
    reverse(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // case 2
    sort(v.rbegin(), v.rend());
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}