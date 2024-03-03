#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms = {1, 2, 6, 3, 2, 1, 5, 6};
    ms.insert(3);
    ms.insert(4);
    for (auto i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // case 1
    auto i = ms.lower_bound(5);
    cout << *i << " ";

    // case 2

    auto i = ms.lower_bound(8);
    if (i == ms.end())
    {
        cout << "ERROR:";
    }
    else
    {
        cout << *i << " ";
    }

    // case 3
    auto i = ms.lower_bound(4);
    cout << *i << " ";
}