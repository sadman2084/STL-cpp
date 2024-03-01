// To add values in vector we use 'push_back'.Here we don't need to add the index size.We call add values in different ways.
#include <bits/stdc++.h>
using namespace std;
int main()
{ // case 1
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // cout << v.back() << endl;
    // int i = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    //---------------------------------------
    // case 2
    //  vector<int> v = {0, 1, 2, 3, 4};

    //------------------------------------------
    // case 3
    int n = 10;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}