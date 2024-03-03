#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.resize(10); // It means we are declaring a vector its size,means the vector will act like array.

    // OR

    vector<int> v1(10, 2); // Declaring vector as array will fixed size and the output will be 2 after printing 1 to 6
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}