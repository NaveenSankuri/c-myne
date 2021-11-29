#include <iostream>
using namespace std;
void add(int x, int y)
{
    cout << "the addition is :" << x + y << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    add(a, b);
}