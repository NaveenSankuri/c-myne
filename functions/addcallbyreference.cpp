#include <bits/stdc++.h>
using namespace std;
void add(int a, int b, int &c)
{
    c = a + b;
}
int main()
{
    int x, y, z = 0;
    cout << "enter Two numbers :" << endl;
    cin >> x >> y;
    add(x, y, z);
    cout << "Z :" << z << endl;
}