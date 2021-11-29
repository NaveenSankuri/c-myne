#include <iostream>
using namespace std;
void add();
int main()
{
    add();
}
void add()
{
    int a, b;
    cout << "Enter two Numbers :" << endl;
    cin >> a >> b;
    cout << "THE SUM IS :" << a + b << endl;
}