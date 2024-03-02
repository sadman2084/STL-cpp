// To input values we need to use insert instead of push_back
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(45);
    s.insert(77);
    s.insert(45);
    s.insert(86);
    s.insert(76);
    s.insert(8776);
    // case 1          erase all values
    //  s.erase(s.begin(), s.end());
    //  for (auto i = s.begin(); i != s.end(); i++)
    //  {
    //      cout << *i << " ";
    //  }

    // case 2       erase specific value by inserting that value
    // s.erase(77); // typing the value 77 to erase it
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // case 3
    // first the set will make a sorted list,then it will erase index 4 value.thats why we are using advance
    auto i = s.begin(); // declaring iterator
    advance(i, 4);
    s.erase(i);
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
}