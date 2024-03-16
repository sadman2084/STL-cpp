#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {3, 4};

    if (p1 < p2) // tests the 1st value of p1 with p2.if the p1 is greater than p2,then it never checks the 2nd value
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}