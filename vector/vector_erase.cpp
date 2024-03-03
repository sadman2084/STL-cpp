// We can erase element or elements in many ways.
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

    // case 1
    //  v.erase(v.begin());//first value will be deleted
    //  for(int i = 0; i < v.size(); i++)
    //  {
    //      cout << v[i] << endl;
    //  }

    // //case 2
    //     v.erase(v.begin() + 2); // 2nd index value will be deleted

    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << endl;
    //     }

    // // case 3
    // v.erase(v.begin() + 2, v.end() - 4); // 4 value will be deleted from starting to index 2
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    v.erase(v.begin() + 2, v.begin() + 4); // 2nd index to 4th index will be deleted

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}