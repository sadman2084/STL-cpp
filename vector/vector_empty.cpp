#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << v.size() << endl;
    if (v.empty())//Is the array empty or not
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "NOT OK" << endl;
    }
}