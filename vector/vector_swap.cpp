#include <bits/stdc++.h>
using namespace std;
int main()
{
    // case 1  swap all values
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    // v1.push_back(5);

    // vector<int> v2;
    // v2.push_back(10);
    // v2.push_back(20);
    // v2.push_back(30);
    // v2.push_back(40);
    // v2.push_back(50);

    // swap(v1, v2);
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }



    /// case 2    swap between two values

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    swap(v[0], v[1]);
    cout<<v[0]<<" "<<v[1]<<endl;
}