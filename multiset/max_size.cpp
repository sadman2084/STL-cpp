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


    cout<<ms.max_size() << endl;
}