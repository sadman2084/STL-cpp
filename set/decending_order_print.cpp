#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> s;//printing in decending order
    s.insert(45);
    s.insert(77);
    s.insert(45);
    s.insert(876);
    s.insert(5643);
    s.insert(9877);

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
}