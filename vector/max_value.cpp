#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(448);
    v.push_back(34);
    v.push_back(49);
    v.push_back(65);

    auto i = max_element(v.begin(), v.end());
    cout << *i << endl; // prints the max value(important)

    int n = max_element(v.begin(), v.end()) - v.begin();
    cout << n << endl; // prints the max value's index(important)

    auto it = min_element(v.begin(), v.end());
    cout << *it << endl; // prints the min value(important)

    int m = min_element(v.begin(), v.end()) - v.begin();
    cout << m << endl; // prints the min value's index(important)
}