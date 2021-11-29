#include <bits/stdc++.h>
using namespace std;
void increment(int *p)
{
    (*p)++;
    cout << "p is :" << *p << endl;
}
int main()
{
    int a;
    cout << "enter an integer :";
    cin >> a;
    increment(&a);
    cout << "a is :" << a << endl;
    return 0;
}