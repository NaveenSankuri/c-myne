#include <bits/stdc++.h>
using namespace std;
int increment(int x)
{
    x++;
    return x;
}
int main()
{
    int a;
    cout << "enter an integer";
    cin >> a;
    cout << "x is:" << increment(a) << endl;
    cout << "a is:" << a;
    return 0;
}