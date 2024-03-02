#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(35);
    s.insert(43);
    s.insert(2);
    s.insert(35);
    s.insert(7);
    s.insert(78);
    int num = s.count(35); // It will return 0 or 1,if there are many values but it cencels all same value except one value.so it will count 1,if there is no value then returns 0.
    cout << num << endl;
    int num2=s.count(345);
    cout<<num2<<endl;
}