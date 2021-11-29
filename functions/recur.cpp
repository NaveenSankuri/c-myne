#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        print(n - 1);
    }
}
int main()
{
    int a;
    cout << "Enter a number to print naturial numbers upto it :";
    cin >> a;
    print(a);
    return 0;
}