#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(45);
    s.insert(77);
    s.insert(45);
    s.insert(876);

    if (s.empty())//Is the set is empty or not
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }
}