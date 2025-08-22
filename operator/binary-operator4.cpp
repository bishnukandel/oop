/// write a program to add time in hours and minutes of two differenet objects using operator overloading

#include <iostream>
using namespace std;

class bishnu
{
    int hours;
    int min;

public:
    void get()
    {
        cout << "enter hours and minutes" << endl;
        cin >> hours;
        cin >> min;
    }
    void display()
    {
        cout << hours << " : " << min << endl;
    }
    bishnu operator+(bishnu c)
    {
        bishnu temp;
        temp.min = min + c.min;                         ////adds the minutes
        temp.hours = hours + c.hours + (temp.min / 60); /////carry ako minutes lai hours ma convert  garne
        temp.min = temp.min % 60;                       /// min lai 0-59 ko range ma rakhne
        return temp;
    }
};
int main()
{
    bishnu a, b, sum;
    a.get();
    b.get();
    sum = a + b;
    sum.display();
    return 0;
}