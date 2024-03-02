// To input values we need to use insert instead of push_back
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
    auto i = s.find(45);//We want to find the value 45.please insert 76 and try
    if (i != s.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}