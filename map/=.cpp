#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; // first int is for index and 2nd is for value
    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({5, 30});
    mp.insert({3, 40});
    map<int, int> mpp;
    mpp = mp;
    for(auto i=mpp.begin(); i!=mpp.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}