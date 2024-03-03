#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(24);
    v.push_back(16);
    v.push_back(43);
    v.push_back(33);
    // sorting by ascending order
    sort(v.begin(), v.end()); // sorts from starting to ending
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // sorting by descending order
    sort(v.begin(), v.end(), greater<int>()); // sorts from starting to ending
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}