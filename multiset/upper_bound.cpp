#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms = {1, 2, 6, 3, 2, 4, 1, 5, 6};
    ms.insert(3);
    ms.insert(4);
    for (auto i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // case 1
    auto i = ms.upper_bound(3);
    cout << *i << " ";

    // case 2
    auto i = ms.upper_bound(9);
    if (i == ms.end())
    {
        cout << "there is no value greater than 6";
    }
    else
    {
        cout << *i << endl;
    }
}