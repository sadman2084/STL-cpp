#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {3, 4};
    pair<int, int> p = max(p1, p2);
    cout << p.first << " " << p.second << endl;
}
