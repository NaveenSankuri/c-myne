#include <bits/stdc++.h>
using namespace std;
int sub(int x, int y)
{
    return x - y;
}
int main()
{
    int a, b, c;
    cout << "Enter Two Integers :" << endl;
    cin >> a >> b;
    c = sub(a, b);
    cout << "the subtraction is :" << c << endl;
}