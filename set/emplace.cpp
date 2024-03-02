#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 3, 4, 5, 6};
    s.emplace(1);
    s.emplace(7);
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " " ;
    }
}