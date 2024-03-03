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
    //  ms.erase(ms.begin(), ms.end()); // erase first to last
    //  cout << ms.size() << endl;

    // case 2
    // ms.erase(1); //erase specific value
    // for (auto i = ms.begin(); i != ms.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // case 3

    auto i = ms.begin(); // declaring iterator
    advance(i, 4);//erasing the value oo index 4
    ms.erase(i);
    for (auto i = ms.begin(); i != ms.end(); i++)
    {
        cout << *i << " ";
    }
}