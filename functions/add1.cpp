#include <iostream>
using namespace std;
int add(int, int);
int main()
{
    int a, b, c;
    cout << "Enter Two numbers";
    cin >> a >> b;
    c = add(a, b);
    cout << "the addition is :" << c << endl;
}
int add(int x, int y)
{
    return (x + y);
}