#include<iostream>
using namespace std;
class nepal
{
    public:
    virtual void say()
    {
        cout<<"nepal";
    }
};
class bharatpur: public nepal
{
    public:
    void say()
    {
        cout<<"bharatpur";
    }
};
class tandi: public nepal{
    public:
    void say()
    {
        cout<<"tandi";
    }
};
void fun(nepal *p)
{
    p -> say();
}
int main()
{
    bharatpur b;
    tandi t;
    fun(&b);
    fun(&t);
    return 0;
}