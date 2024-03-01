//It will reverse all values contained by the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(24);
    v.push_back(16);
    v.push_back(43);
    v.push_back(33);

    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}