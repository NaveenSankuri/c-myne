#include <bits/stdc++.h>
using namespace std;
void increment(int &x)
{
    x++;
    cout << "x is :" << x << endl;
}
int main()
{
    int a;
    cin >> a;
    increment(a);
    cout << "a is :" << a << endl;
    return 0;
}