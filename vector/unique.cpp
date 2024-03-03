#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(6);
    v.push_back(5);
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    int size = unique(v.begin(), v.end()) - v.begin();

    cout << v.size() << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}