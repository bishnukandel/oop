//wap to add two complex number using friend function.

#include<iostream>
using namespace std;

class complex
{
    int a;  //real term
    int b; ///imaginary term
    public:

    complex()
    {
    cout<<"enter real and imaginary term";
    cin>>a>>b;
    }
    void display()
    {
        cout<<"number="<<a<<"+"<<b<<"i"<<endl;
    }
    friend void add();
};
void add()
{
    complex c1,c2;
    c1.display();
    c2.display();
    c1.a=c1.a+c2.a;
    c1.b=c1.b+c2.b;
    cout<<"after addition.."<<endl;
    c1.display();
}
int main()
{
    add();
    return 0;
}