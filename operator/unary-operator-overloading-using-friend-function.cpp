/// overloading increment (++) operator using friend function

#include <iostream>
using namespace std;

class Apple
{
    int num;

public:
    void get()
    {
        cout << "enter a number" << endl;
        cin >> num;
    }
    void display()
    {
        cout << "number=" << num << endl;
    }
    friend void operator++(Apple &a);   ///friend void operator ++(Apple &a, int );    for post
};
void operator++(Apple &a)               ///(Apple &a, int );     for post
{
    ++a.num;
}
int main()
{
    Apple a;
    a.get();
    ++a;
    a.display();
    return 0;
}
