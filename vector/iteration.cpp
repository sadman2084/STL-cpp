#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int i;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    //Or

    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}