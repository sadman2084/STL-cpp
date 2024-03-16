#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int>p,p2;
    p.first=1;
    p.second=2;
    p2.swap(p);
    cout << p2.first << " " << p2.second << endl;
}