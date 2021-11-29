#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y, c;
    cout << "enter two values";
    cin >> x >> y;
    c = add(x, y);
    cout << "the summation is :" << c;
}