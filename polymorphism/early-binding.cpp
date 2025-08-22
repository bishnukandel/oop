#include<iostream>
using namespace std;
class apple
{
    public:
    void fun()
    {
        cout<<"apple";
    }
};
class ball: public apple
{
    public:
    void gun()
    {
        cout<<"ball";
    }
};
int main()
{
    apple *p;
    ball b;
    p=&b;
    p->fun();
}