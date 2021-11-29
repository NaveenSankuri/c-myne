#include <bits/stdc++.h>
using namespace std;
void add(int x, int y, int *z)
{
    *z = x + y;
}
int main()
{
    int a, b, c = 0;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    add(a, b, &c);
    cout << "the summation is :" << c;
}