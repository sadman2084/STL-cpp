#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; // first int is for index and 2nd is for value
    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({2, 30});
    mp.insert({3, 40});

    cout << mp[0] << " " << mp[1] << " " << mp[2] << endl;
    cout << mp.at(0) << " " << mp.at(1) << endl;
    ;

    // OR
    mp[0] = 43; // it will update the value of index one
    mp[1] = 53;
    cout << mp[0] << " " << mp[1] << " " << mp[2] << endl;
    // To print by iterator
    for (auto i : mp)
    {

        cout << i.first << " " << i.second << endl;
        // the output will be automatically sorted by the idex value
    }

    //OR
    for(auto i=mp.begin(); i!=mp.end();i++)
    {
        cout<<i->first << " " << i->second << endl;
    }
}