#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 4, 5, 6};
    // case 1.If the value 2 exists in the set it will print 2.
    //  auto i=s.lower_bound(2);
    //  cout<<*i<<endl;

    // case 2.if the value doesn't exist in the set it will show its upper nearest value
    // auto i = s.lower_bound(3);
    // cout << *i << endl;

    // case 3.if the value is greater than largest number of set values,it can show its nearest value.
    auto i = s.lower_bound(8);
    if (i == s.end())
    {
        cout << "input value is greater than largest number of set values" << endl;
    }
    else
    {
        cout << *i << endl;
    }
}