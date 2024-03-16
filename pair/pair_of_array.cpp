#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    sort(p, p + 5);
    for (auto i = p.begin(); i != p.end(); i++)
    {
        cout << i.first << " " << i.second << endl;
    }
}