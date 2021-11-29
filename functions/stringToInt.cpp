#include <bits/stdc++.h>
using namespace std;
int conversion(string x)
{
    int i;            /* use stringstream class to declare a stream object to insert a string and then fetch as integer type data. */
    stringstream obj; //declare a stream object
    obj << x;         //insert data into obj
    obj >> i;         // fetch integer type data
    return i;
}
int main()
{
    string s; // declare a string
    int x;    // declare a string
    getline(cin, s);
    x = conversion(s);
    cout << "x:" << x;
    return 0;
}