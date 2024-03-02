#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(45);
    s.insert(77);
    s.insert(45);
    s.insert(876);

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << s.size() << endl;
}