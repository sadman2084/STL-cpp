#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<v.front()<<endl;//prints the 1st value
    int i = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}