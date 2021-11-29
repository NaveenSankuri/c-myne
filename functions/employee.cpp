#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    int id, salary, working_hours;
    string name;

public:
    employee()
    {
        id = 0;
        salary = 0;
        working_hours = 0;
        name = "xxxxx";
    }
    void getData()
    {
        cout << "Enter id:";
        cin >> id;
        cout << "enter working hours :";
        cin >> working_hours;
        cout << "enter Name :";
        cin >> name;
        salary = working_hours * 60;
    }
    void show()
    {
        cout << "id :" << id << endl;
        cout << "name :" << name << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    employee s1, s2;
    s1.getData();
    s2.getData();
    s1.show();
    s2.show();
    return 0;
}