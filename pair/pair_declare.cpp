#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    // or
    pair<int, double> p1;
    // or
    pair<int, string> p2;
    // or
    pair<int, vector<int>> p3;

    p.first = 1;
    p.second = 2;
    cout << p.first << " " << p.second << endl;

    // using vector
    for (auto i : p3.second)
    {
        cout << i;
    }

    // or
    pair<int, int> p4;
    p4 = make_pair(10, 30);

    cout<<p4.first<<" "<<p4.second<<endl;
}