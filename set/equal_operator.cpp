#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1 = {1, 2, 3, 4};
    set<int> s2;

    s2 = s1; // it helps to copy all values from set 1 to set 2
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
}