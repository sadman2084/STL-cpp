#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1 = {1, 2, 3, 4, 5, 6, 7, 8};
    set<int> s2 = {9, 10, 11, 12, 13, 14, 15, 16, 17};

    s1.swap(s2);
    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
}