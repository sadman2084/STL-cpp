// A value can be inserted into the array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    int i;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // //case 1
    //     v.insert(v.begin() + 3, 57);//the value 57 will be inserted in index 3

    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //     }

    // case 2
    v.insert(v.begin() + 3, 4, 57); // the value 57 will be inserted in index 3 for 4 times

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}