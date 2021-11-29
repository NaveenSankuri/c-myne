#include <iostream>
using namespace std;
int check(int x = 6, int y = 7, int z = 6)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}
int main()
{
    int big;
    big = check(5);
    cout << "the big value is :" << big;
    return 0;
}