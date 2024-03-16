#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; // first int is for index and 2nd is for value
    mp.insert({0, 10});
    mp.insert({0, 10});
    mp.insert({0, 10});
    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({2, 30});
    mp.insert({3, 40});
    cout << mp.count(0) << " ";
}