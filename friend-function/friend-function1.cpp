//write a program to add two private number of two different class using friend function.


#include<iostream>
using namespace std;

class A {
    int num;
    public:
    friend void fun();
};
class B{
    int num;
    public:
    friend void fun();
};
void fun()
{
    A a;
    a.num=5;
    B b;
    b.num=5;
    cout<<a.num+b.num<<endl;
}
int main()
{
    fun();
}

