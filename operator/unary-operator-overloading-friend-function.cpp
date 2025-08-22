/// overloading unary minus(-) operator` using friend function

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
    friend void operator-(Apple &a);
    //friend Apple operator-(Apple &a);
};
/// operator overloading function
void operator-(Apple &a)  //Apple operator -(Apple &a)
{
    a.num = -a.num;
    ///Apple temp;
    //temp.num=-a.num;
    ///return temp;
}
int main()
{
    Apple a;   //Apple a,b;
    a.get();
    a.display(); // 5
    -a;          // operator -(a);
    //b=-a;
    a.display(); // 5
    //b.display
    return 0;
}

