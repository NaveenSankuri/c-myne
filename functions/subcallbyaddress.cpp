#include <bits/stdc++.h>
using namespace std;
void sub(int x, int y, int *z)
{
    *z = x - y;
}
int main()
{
    int a, b, c = 0;
    cout << "Give Two integer Values here :" << endl;
    cin >> a >> b;
    sub(a, b, &c);
    cout << "the subtraction is :" << c << endl;
}