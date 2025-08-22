/// pure virtual polymorphism
///pure virtual function

#include<iostream>
using namespace std;
///abstract class 
class shape{
    public:
    virtual void draw()=0;  ///pure virtual function
};
class rectangle : public shape{
    public:
    void draw()
    {
        cout<<"draw rectangle"<<endl;
    }
};
class circle : public shape{
    public:
    void draw()
    {
        cout<<"draw circle"<<endl;
    }
};
class square:public shape{
    public:
    void draw()
    {
        cout<<"draw square"<<endl;
    }
};
void choice(shape *p)
{
    p->draw();
}
int main()
{
    square s;
    choice(&s);
    rectangle r;
    choice(&r);
    circle c;
    choice(&c);
    return 0;
}
