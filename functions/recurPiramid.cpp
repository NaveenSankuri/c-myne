#include <bits/stdc++.h>
using namespace std;
void print(int x)
{
    if (x > 0)
    {
        print(x--);
        cout << " * ";
    }
}
void triangle(int s)
{
    if (s > 0)
    {
        triangle(s--);
        cout << endl;
        print(s);
    }
}

int main()
{
    int n;
    cout << "enter a number :" << endl;
    cin >> n;
    triangle(n);
}
// void print(int x)
// {
//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int s;
//     cin >> s;
//     print(s);
// }