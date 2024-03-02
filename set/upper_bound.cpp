#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 4, 5, 6};


    // case 1:it will show the upper nearest vlaue of input vlaue
    // auto i = s.upper_bound(2);
    // cout << *i << endl;


    auto i = s.upper_bound(6);
    if(i==s.end())
    {
        cout<<"there is no value greater than 6";
    }
    else
    {
        cout << *i << endl;
    }
    
}